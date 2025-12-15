// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSMANAGERSCHEDULER_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSMANAGERSCHEDULER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersResponseBodyClustersManagerScheduler : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyClustersManagerScheduler& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyClustersManagerScheduler& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListClustersResponseBodyClustersManagerScheduler() = default ;
    ListClustersResponseBodyClustersManagerScheduler(const ListClustersResponseBodyClustersManagerScheduler &) = default ;
    ListClustersResponseBodyClustersManagerScheduler(ListClustersResponseBodyClustersManagerScheduler &&) = default ;
    ListClustersResponseBodyClustersManagerScheduler(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyClustersManagerScheduler() = default ;
    ListClustersResponseBodyClustersManagerScheduler& operator=(const ListClustersResponseBodyClustersManagerScheduler &) = default ;
    ListClustersResponseBodyClustersManagerScheduler& operator=(ListClustersResponseBodyClustersManagerScheduler &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->version_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListClustersResponseBodyClustersManagerScheduler& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListClustersResponseBodyClustersManagerScheduler& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The scheduler type.
    std::shared_ptr<string> type_ = nullptr;
    // The scheduler version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
