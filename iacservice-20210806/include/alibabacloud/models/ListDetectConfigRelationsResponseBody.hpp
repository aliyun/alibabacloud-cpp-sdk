// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDETECTCONFIGRELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDETECTCONFIGRELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListDetectConfigRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDetectConfigRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(detectConfigRelations, detectConfigRelations_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDetectConfigRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(detectConfigRelations, detectConfigRelations_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDetectConfigRelationsResponseBody() = default ;
    ListDetectConfigRelationsResponseBody(const ListDetectConfigRelationsResponseBody &) = default ;
    ListDetectConfigRelationsResponseBody(ListDetectConfigRelationsResponseBody &&) = default ;
    ListDetectConfigRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDetectConfigRelationsResponseBody() = default ;
    ListDetectConfigRelationsResponseBody& operator=(const ListDetectConfigRelationsResponseBody &) = default ;
    ListDetectConfigRelationsResponseBody& operator=(ListDetectConfigRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetectConfigRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectConfigRelations& obj) { 
        DARABONBA_PTR_TO_JSON(attachDate, attachDate_);
        DARABONBA_PTR_TO_JSON(detectConfigId, detectConfigId_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(targetId, targetId_);
        DARABONBA_PTR_TO_JSON(targetName, targetName_);
        DARABONBA_PTR_TO_JSON(targetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, DetectConfigRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(attachDate, attachDate_);
        DARABONBA_PTR_FROM_JSON(detectConfigId, detectConfigId_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(targetId, targetId_);
        DARABONBA_PTR_FROM_JSON(targetName, targetName_);
        DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      };
      DetectConfigRelations() = default ;
      DetectConfigRelations(const DetectConfigRelations &) = default ;
      DetectConfigRelations(DetectConfigRelations &&) = default ;
      DetectConfigRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectConfigRelations() = default ;
      DetectConfigRelations& operator=(const DetectConfigRelations &) = default ;
      DetectConfigRelations& operator=(DetectConfigRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attachDate_ == nullptr
        && this->detectConfigId_ == nullptr && this->enabled_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr; };
      // attachDate Field Functions 
      bool hasAttachDate() const { return this->attachDate_ != nullptr;};
      void deleteAttachDate() { this->attachDate_ = nullptr;};
      inline string getAttachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
      inline DetectConfigRelations& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


      // detectConfigId Field Functions 
      bool hasDetectConfigId() const { return this->detectConfigId_ != nullptr;};
      void deleteDetectConfigId() { this->detectConfigId_ = nullptr;};
      inline string getDetectConfigId() const { DARABONBA_PTR_GET_DEFAULT(detectConfigId_, "") };
      inline DetectConfigRelations& setDetectConfigId(string detectConfigId) { DARABONBA_PTR_SET_VALUE(detectConfigId_, detectConfigId) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
      inline DetectConfigRelations& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline DetectConfigRelations& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline DetectConfigRelations& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline DetectConfigRelations& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      shared_ptr<string> attachDate_ {};
      shared_ptr<string> detectConfigId_ {};
      shared_ptr<string> enabled_ {};
      shared_ptr<string> targetId_ {};
      shared_ptr<string> targetName_ {};
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->detectConfigRelations_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // detectConfigRelations Field Functions 
    bool hasDetectConfigRelations() const { return this->detectConfigRelations_ != nullptr;};
    void deleteDetectConfigRelations() { this->detectConfigRelations_ = nullptr;};
    inline const vector<ListDetectConfigRelationsResponseBody::DetectConfigRelations> & getDetectConfigRelations() const { DARABONBA_PTR_GET_CONST(detectConfigRelations_, vector<ListDetectConfigRelationsResponseBody::DetectConfigRelations>) };
    inline vector<ListDetectConfigRelationsResponseBody::DetectConfigRelations> getDetectConfigRelations() { DARABONBA_PTR_GET(detectConfigRelations_, vector<ListDetectConfigRelationsResponseBody::DetectConfigRelations>) };
    inline ListDetectConfigRelationsResponseBody& setDetectConfigRelations(const vector<ListDetectConfigRelationsResponseBody::DetectConfigRelations> & detectConfigRelations) { DARABONBA_PTR_SET_VALUE(detectConfigRelations_, detectConfigRelations) };
    inline ListDetectConfigRelationsResponseBody& setDetectConfigRelations(vector<ListDetectConfigRelationsResponseBody::DetectConfigRelations> && detectConfigRelations) { DARABONBA_PTR_SET_RVALUE(detectConfigRelations_, detectConfigRelations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDetectConfigRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDetectConfigRelationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDetectConfigRelationsResponseBody::DetectConfigRelations>> detectConfigRelations_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
