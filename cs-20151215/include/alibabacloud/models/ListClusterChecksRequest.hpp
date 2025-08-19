// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCHECKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCHECKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterChecksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterChecksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterChecksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListClusterChecksRequest() = default ;
    ListClusterChecksRequest(const ListClusterChecksRequest &) = default ;
    ListClusterChecksRequest(ListClusterChecksRequest &&) = default ;
    ListClusterChecksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterChecksRequest() = default ;
    ListClusterChecksRequest& operator=(const ListClusterChecksRequest &) = default ;
    ListClusterChecksRequest& operator=(ListClusterChecksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->target_ != nullptr
        && this->type_ != nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListClusterChecksRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListClusterChecksRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The targets to check.
    std::shared_ptr<string> target_ = nullptr;
    // The check method.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
