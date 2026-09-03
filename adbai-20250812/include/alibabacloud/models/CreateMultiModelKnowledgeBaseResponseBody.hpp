// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIMODELKNOWLEDGEBASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIMODELKNOWLEDGEBASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class CreateMultiModelKnowledgeBaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiModelKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(MmkbName, mmkbName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiModelKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(MmkbName, mmkbName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMultiModelKnowledgeBaseResponseBody() = default ;
    CreateMultiModelKnowledgeBaseResponseBody(const CreateMultiModelKnowledgeBaseResponseBody &) = default ;
    CreateMultiModelKnowledgeBaseResponseBody(CreateMultiModelKnowledgeBaseResponseBody &&) = default ;
    CreateMultiModelKnowledgeBaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiModelKnowledgeBaseResponseBody() = default ;
    CreateMultiModelKnowledgeBaseResponseBody& operator=(const CreateMultiModelKnowledgeBaseResponseBody &) = default ;
    CreateMultiModelKnowledgeBaseResponseBody& operator=(CreateMultiModelKnowledgeBaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbClusterId_ == nullptr
        && this->mmkbName_ == nullptr && this->requestId_ == nullptr; };
    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string getDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline CreateMultiModelKnowledgeBaseResponseBody& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // mmkbName Field Functions 
    bool hasMmkbName() const { return this->mmkbName_ != nullptr;};
    void deleteMmkbName() { this->mmkbName_ = nullptr;};
    inline string getMmkbName() const { DARABONBA_PTR_GET_DEFAULT(mmkbName_, "") };
    inline CreateMultiModelKnowledgeBaseResponseBody& setMmkbName(string mmkbName) { DARABONBA_PTR_SET_VALUE(mmkbName_, mmkbName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMultiModelKnowledgeBaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> dbClusterId_ {};
    shared_ptr<string> mmkbName_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
