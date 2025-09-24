// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListFeaturesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeaturesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Names, names_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeaturesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Names, names_);
    };
    ListFeaturesRequest() = default ;
    ListFeaturesRequest(const ListFeaturesRequest &) = default ;
    ListFeaturesRequest(ListFeaturesRequest &&) = default ;
    ListFeaturesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeaturesRequest() = default ;
    ListFeaturesRequest& operator=(const ListFeaturesRequest &) = default ;
    ListFeaturesRequest& operator=(ListFeaturesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->names_ != nullptr; };
    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string names() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline ListFeaturesRequest& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


  protected:
    std::shared_ptr<string> names_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
