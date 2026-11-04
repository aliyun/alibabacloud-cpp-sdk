// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEUSERIDBYCUSTOMUSERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEUSERIDBYCUSTOMUSERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryFaceUserIdByCustomUserIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceUserIdByCustomUserIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomUserId, customUserId_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceUserIdByCustomUserIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomUserId, customUserId_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
    };
    QueryFaceUserIdByCustomUserIdRequest() = default ;
    QueryFaceUserIdByCustomUserIdRequest(const QueryFaceUserIdByCustomUserIdRequest &) = default ;
    QueryFaceUserIdByCustomUserIdRequest(QueryFaceUserIdByCustomUserIdRequest &&) = default ;
    QueryFaceUserIdByCustomUserIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceUserIdByCustomUserIdRequest() = default ;
    QueryFaceUserIdByCustomUserIdRequest& operator=(const QueryFaceUserIdByCustomUserIdRequest &) = default ;
    QueryFaceUserIdByCustomUserIdRequest& operator=(QueryFaceUserIdByCustomUserIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customUserId_ == nullptr
        && this->isolationId_ == nullptr; };
    // customUserId Field Functions 
    bool hasCustomUserId() const { return this->customUserId_ != nullptr;};
    void deleteCustomUserId() { this->customUserId_ = nullptr;};
    inline string getCustomUserId() const { DARABONBA_PTR_GET_DEFAULT(customUserId_, "") };
    inline QueryFaceUserIdByCustomUserIdRequest& setCustomUserId(string customUserId) { DARABONBA_PTR_SET_VALUE(customUserId_, customUserId) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline QueryFaceUserIdByCustomUserIdRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


  protected:
    // The user ID in the caller system.
    // 
    // This parameter is required.
    shared_ptr<string> customUserId_ {};
    // The isolation ID.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
