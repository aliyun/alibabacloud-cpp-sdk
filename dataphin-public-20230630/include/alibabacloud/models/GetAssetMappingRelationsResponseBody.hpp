// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETMAPPINGRELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSETMAPPINGRELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAssetMappingRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetMappingRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MappingRelationList, mappingRelationList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetMappingRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MappingRelationList, mappingRelationList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAssetMappingRelationsResponseBody() = default ;
    GetAssetMappingRelationsResponseBody(const GetAssetMappingRelationsResponseBody &) = default ;
    GetAssetMappingRelationsResponseBody(GetAssetMappingRelationsResponseBody &&) = default ;
    GetAssetMappingRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetMappingRelationsResponseBody() = default ;
    GetAssetMappingRelationsResponseBody& operator=(const GetAssetMappingRelationsResponseBody &) = default ;
    GetAssetMappingRelationsResponseBody& operator=(GetAssetMappingRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MappingRelationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MappingRelationList& obj) { 
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(Guid, guid_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(StandardCode, standardCode_);
        DARABONBA_PTR_TO_JSON(StandardId, standardId_);
        DARABONBA_PTR_TO_JSON(StandardName, standardName_);
        DARABONBA_PTR_TO_JSON(StandardSetDirectory, standardSetDirectory_);
        DARABONBA_PTR_TO_JSON(StandardSetId, standardSetId_);
        DARABONBA_PTR_TO_JSON(StandardSetName, standardSetName_);
        DARABONBA_PTR_TO_JSON(StandardStage, standardStage_);
      };
      friend void from_json(const Darabonba::Json& j, MappingRelationList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(Guid, guid_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(StandardCode, standardCode_);
        DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
        DARABONBA_PTR_FROM_JSON(StandardName, standardName_);
        DARABONBA_PTR_FROM_JSON(StandardSetDirectory, standardSetDirectory_);
        DARABONBA_PTR_FROM_JSON(StandardSetId, standardSetId_);
        DARABONBA_PTR_FROM_JSON(StandardSetName, standardSetName_);
        DARABONBA_PTR_FROM_JSON(StandardStage, standardStage_);
      };
      MappingRelationList() = default ;
      MappingRelationList(const MappingRelationList &) = default ;
      MappingRelationList(MappingRelationList &&) = default ;
      MappingRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MappingRelationList() = default ;
      MappingRelationList& operator=(const MappingRelationList &) = default ;
      MappingRelationList& operator=(MappingRelationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetType_ == nullptr
        && this->guid_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->standardCode_ == nullptr && this->standardId_ == nullptr
        && this->standardName_ == nullptr && this->standardSetDirectory_ == nullptr && this->standardSetId_ == nullptr && this->standardSetName_ == nullptr && this->standardStage_ == nullptr; };
      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline MappingRelationList& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // guid Field Functions 
      bool hasGuid() const { return this->guid_ != nullptr;};
      void deleteGuid() { this->guid_ = nullptr;};
      inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
      inline MappingRelationList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline MappingRelationList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MappingRelationList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // standardCode Field Functions 
      bool hasStandardCode() const { return this->standardCode_ != nullptr;};
      void deleteStandardCode() { this->standardCode_ = nullptr;};
      inline string getStandardCode() const { DARABONBA_PTR_GET_DEFAULT(standardCode_, "") };
      inline MappingRelationList& setStandardCode(string standardCode) { DARABONBA_PTR_SET_VALUE(standardCode_, standardCode) };


      // standardId Field Functions 
      bool hasStandardId() const { return this->standardId_ != nullptr;};
      void deleteStandardId() { this->standardId_ = nullptr;};
      inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
      inline MappingRelationList& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


      // standardName Field Functions 
      bool hasStandardName() const { return this->standardName_ != nullptr;};
      void deleteStandardName() { this->standardName_ = nullptr;};
      inline string getStandardName() const { DARABONBA_PTR_GET_DEFAULT(standardName_, "") };
      inline MappingRelationList& setStandardName(string standardName) { DARABONBA_PTR_SET_VALUE(standardName_, standardName) };


      // standardSetDirectory Field Functions 
      bool hasStandardSetDirectory() const { return this->standardSetDirectory_ != nullptr;};
      void deleteStandardSetDirectory() { this->standardSetDirectory_ = nullptr;};
      inline string getStandardSetDirectory() const { DARABONBA_PTR_GET_DEFAULT(standardSetDirectory_, "") };
      inline MappingRelationList& setStandardSetDirectory(string standardSetDirectory) { DARABONBA_PTR_SET_VALUE(standardSetDirectory_, standardSetDirectory) };


      // standardSetId Field Functions 
      bool hasStandardSetId() const { return this->standardSetId_ != nullptr;};
      void deleteStandardSetId() { this->standardSetId_ = nullptr;};
      inline int64_t getStandardSetId() const { DARABONBA_PTR_GET_DEFAULT(standardSetId_, 0L) };
      inline MappingRelationList& setStandardSetId(int64_t standardSetId) { DARABONBA_PTR_SET_VALUE(standardSetId_, standardSetId) };


      // standardSetName Field Functions 
      bool hasStandardSetName() const { return this->standardSetName_ != nullptr;};
      void deleteStandardSetName() { this->standardSetName_ = nullptr;};
      inline string getStandardSetName() const { DARABONBA_PTR_GET_DEFAULT(standardSetName_, "") };
      inline MappingRelationList& setStandardSetName(string standardSetName) { DARABONBA_PTR_SET_VALUE(standardSetName_, standardSetName) };


      // standardStage Field Functions 
      bool hasStandardStage() const { return this->standardStage_ != nullptr;};
      void deleteStandardStage() { this->standardStage_ = nullptr;};
      inline string getStandardStage() const { DARABONBA_PTR_GET_DEFAULT(standardStage_, "") };
      inline MappingRelationList& setStandardStage(string standardStage) { DARABONBA_PTR_SET_VALUE(standardStage_, standardStage) };


    protected:
      shared_ptr<string> assetType_ {};
      shared_ptr<string> guid_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> standardCode_ {};
      shared_ptr<int64_t> standardId_ {};
      shared_ptr<string> standardName_ {};
      shared_ptr<string> standardSetDirectory_ {};
      shared_ptr<int64_t> standardSetId_ {};
      shared_ptr<string> standardSetName_ {};
      shared_ptr<string> standardStage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->mappingRelationList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAssetMappingRelationsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAssetMappingRelationsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // mappingRelationList Field Functions 
    bool hasMappingRelationList() const { return this->mappingRelationList_ != nullptr;};
    void deleteMappingRelationList() { this->mappingRelationList_ = nullptr;};
    inline const vector<GetAssetMappingRelationsResponseBody::MappingRelationList> & getMappingRelationList() const { DARABONBA_PTR_GET_CONST(mappingRelationList_, vector<GetAssetMappingRelationsResponseBody::MappingRelationList>) };
    inline vector<GetAssetMappingRelationsResponseBody::MappingRelationList> getMappingRelationList() { DARABONBA_PTR_GET(mappingRelationList_, vector<GetAssetMappingRelationsResponseBody::MappingRelationList>) };
    inline GetAssetMappingRelationsResponseBody& setMappingRelationList(const vector<GetAssetMappingRelationsResponseBody::MappingRelationList> & mappingRelationList) { DARABONBA_PTR_SET_VALUE(mappingRelationList_, mappingRelationList) };
    inline GetAssetMappingRelationsResponseBody& setMappingRelationList(vector<GetAssetMappingRelationsResponseBody::MappingRelationList> && mappingRelationList) { DARABONBA_PTR_SET_RVALUE(mappingRelationList_, mappingRelationList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAssetMappingRelationsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssetMappingRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAssetMappingRelationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<vector<GetAssetMappingRelationsResponseBody::MappingRelationList>> mappingRelationList_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
