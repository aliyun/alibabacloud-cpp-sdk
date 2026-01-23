// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetStandardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(StandardGetQuery, standardGetQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(StandardGetQuery, standardGetQuery_);
    };
    GetStandardRequest() = default ;
    GetStandardRequest(const GetStandardRequest &) = default ;
    GetStandardRequest(GetStandardRequest &&) = default ;
    GetStandardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandardRequest() = default ;
    GetStandardRequest& operator=(const GetStandardRequest &) = default ;
    GetStandardRequest& operator=(GetStandardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StandardGetQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StandardGetQuery& obj) { 
        DARABONBA_PTR_TO_JSON(NeedRelation, needRelation_);
        DARABONBA_PTR_TO_JSON(Nullable, nullable_);
        DARABONBA_PTR_TO_JSON(StandardId, standardId_);
        DARABONBA_PTR_TO_JSON(StandardStage, standardStage_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, StandardGetQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(NeedRelation, needRelation_);
        DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
        DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
        DARABONBA_PTR_FROM_JSON(StandardStage, standardStage_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      StandardGetQuery() = default ;
      StandardGetQuery(const StandardGetQuery &) = default ;
      StandardGetQuery(StandardGetQuery &&) = default ;
      StandardGetQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StandardGetQuery() = default ;
      StandardGetQuery& operator=(const StandardGetQuery &) = default ;
      StandardGetQuery& operator=(StandardGetQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->needRelation_ == nullptr
        && this->nullable_ == nullptr && this->standardId_ == nullptr && this->standardStage_ == nullptr && this->version_ == nullptr; };
      // needRelation Field Functions 
      bool hasNeedRelation() const { return this->needRelation_ != nullptr;};
      void deleteNeedRelation() { this->needRelation_ = nullptr;};
      inline bool getNeedRelation() const { DARABONBA_PTR_GET_DEFAULT(needRelation_, false) };
      inline StandardGetQuery& setNeedRelation(bool needRelation) { DARABONBA_PTR_SET_VALUE(needRelation_, needRelation) };


      // nullable Field Functions 
      bool hasNullable() const { return this->nullable_ != nullptr;};
      void deleteNullable() { this->nullable_ = nullptr;};
      inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
      inline StandardGetQuery& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


      // standardId Field Functions 
      bool hasStandardId() const { return this->standardId_ != nullptr;};
      void deleteStandardId() { this->standardId_ = nullptr;};
      inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
      inline StandardGetQuery& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


      // standardStage Field Functions 
      bool hasStandardStage() const { return this->standardStage_ != nullptr;};
      void deleteStandardStage() { this->standardStage_ = nullptr;};
      inline string getStandardStage() const { DARABONBA_PTR_GET_DEFAULT(standardStage_, "") };
      inline StandardGetQuery& setStandardStage(string standardStage) { DARABONBA_PTR_SET_VALUE(standardStage_, standardStage) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline StandardGetQuery& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<bool> needRelation_ {};
      shared_ptr<bool> nullable_ {};
      // This parameter is required.
      shared_ptr<int64_t> standardId_ {};
      shared_ptr<string> standardStage_ {};
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->standardGetQuery_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetStandardRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // standardGetQuery Field Functions 
    bool hasStandardGetQuery() const { return this->standardGetQuery_ != nullptr;};
    void deleteStandardGetQuery() { this->standardGetQuery_ = nullptr;};
    inline const GetStandardRequest::StandardGetQuery & getStandardGetQuery() const { DARABONBA_PTR_GET_CONST(standardGetQuery_, GetStandardRequest::StandardGetQuery) };
    inline GetStandardRequest::StandardGetQuery getStandardGetQuery() { DARABONBA_PTR_GET(standardGetQuery_, GetStandardRequest::StandardGetQuery) };
    inline GetStandardRequest& setStandardGetQuery(const GetStandardRequest::StandardGetQuery & standardGetQuery) { DARABONBA_PTR_SET_VALUE(standardGetQuery_, standardGetQuery) };
    inline GetStandardRequest& setStandardGetQuery(GetStandardRequest::StandardGetQuery && standardGetQuery) { DARABONBA_PTR_SET_RVALUE(standardGetQuery_, standardGetQuery) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<GetStandardRequest::StandardGetQuery> standardGetQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
