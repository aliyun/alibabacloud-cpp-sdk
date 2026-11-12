// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLakebaseMountParameterGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakebaseMountParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IsApply, isApply_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ParameterDetail, parameterDetail_);
      DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_TO_JSON(ParameterGroupType, parameterGroupType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakebaseMountParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IsApply, isApply_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ParameterDetail, parameterDetail_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupType, parameterGroupType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLakebaseMountParameterGroupResponseBody() = default ;
    DescribeLakebaseMountParameterGroupResponseBody(const DescribeLakebaseMountParameterGroupResponseBody &) = default ;
    DescribeLakebaseMountParameterGroupResponseBody(DescribeLakebaseMountParameterGroupResponseBody &&) = default ;
    DescribeLakebaseMountParameterGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakebaseMountParameterGroupResponseBody() = default ;
    DescribeLakebaseMountParameterGroupResponseBody& operator=(const DescribeLakebaseMountParameterGroupResponseBody &) = default ;
    DescribeLakebaseMountParameterGroupResponseBody& operator=(DescribeLakebaseMountParameterGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParameterDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      ParameterDetail() = default ;
      ParameterDetail(const ParameterDetail &) = default ;
      ParameterDetail(ParameterDetail &&) = default ;
      ParameterDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParameterDetail() = default ;
      ParameterDetail& operator=(const ParameterDetail &) = default ;
      ParameterDetail& operator=(ParameterDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterName_ == nullptr
        && this->parameterValue_ == nullptr; };
      // parameterName Field Functions 
      bool hasParameterName() const { return this->parameterName_ != nullptr;};
      void deleteParameterName() { this->parameterName_ = nullptr;};
      inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
      inline ParameterDetail& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline ParameterDetail& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The parameter name.
      shared_ptr<string> parameterName_ {};
      // The parameter value.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->isApply_ == nullptr && this->modifyTime_ == nullptr && this->parameterDetail_ == nullptr && this->parameterGroupDesc_ == nullptr && this->parameterGroupId_ == nullptr
        && this->parameterGroupName_ == nullptr && this->parameterGroupType_ == nullptr && this->requestId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLakebaseMountParameterGroupResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // isApply Field Functions 
    bool hasIsApply() const { return this->isApply_ != nullptr;};
    void deleteIsApply() { this->isApply_ = nullptr;};
    inline int32_t getIsApply() const { DARABONBA_PTR_GET_DEFAULT(isApply_, 0) };
    inline DescribeLakebaseMountParameterGroupResponseBody& setIsApply(int32_t isApply) { DARABONBA_PTR_SET_VALUE(isApply_, isApply) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeLakebaseMountParameterGroupResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // parameterDetail Field Functions 
    bool hasParameterDetail() const { return this->parameterDetail_ != nullptr;};
    void deleteParameterDetail() { this->parameterDetail_ = nullptr;};
    inline const vector<DescribeLakebaseMountParameterGroupResponseBody::ParameterDetail> & getParameterDetail() const { DARABONBA_PTR_GET_CONST(parameterDetail_, vector<DescribeLakebaseMountParameterGroupResponseBody::ParameterDetail>) };
    inline vector<DescribeLakebaseMountParameterGroupResponseBody::ParameterDetail> getParameterDetail() { DARABONBA_PTR_GET(parameterDetail_, vector<DescribeLakebaseMountParameterGroupResponseBody::ParameterDetail>) };
    inline DescribeLakebaseMountParameterGroupResponseBody& setParameterDetail(const vector<DescribeLakebaseMountParameterGroupResponseBody::ParameterDetail> & parameterDetail) { DARABONBA_PTR_SET_VALUE(parameterDetail_, parameterDetail) };
    inline DescribeLakebaseMountParameterGroupResponseBody& setParameterDetail(vector<DescribeLakebaseMountParameterGroupResponseBody::ParameterDetail> && parameterDetail) { DARABONBA_PTR_SET_RVALUE(parameterDetail_, parameterDetail) };


    // parameterGroupDesc Field Functions 
    bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
    void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
    inline string getParameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
    inline DescribeLakebaseMountParameterGroupResponseBody& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline DescribeLakebaseMountParameterGroupResponseBody& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parameterGroupName Field Functions 
    bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
    void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
    inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
    inline DescribeLakebaseMountParameterGroupResponseBody& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


    // parameterGroupType Field Functions 
    bool hasParameterGroupType() const { return this->parameterGroupType_ != nullptr;};
    void deleteParameterGroupType() { this->parameterGroupType_ = nullptr;};
    inline int32_t getParameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, 0) };
    inline DescribeLakebaseMountParameterGroupResponseBody& setParameterGroupType(int32_t parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLakebaseMountParameterGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The creation time in UTC.
    shared_ptr<string> createTime_ {};
    // Indicates whether the parameter template is applied. Valid values: 0: No. 1: Yes.
    shared_ptr<int32_t> isApply_ {};
    // The modification time in UTC.
    shared_ptr<string> modifyTime_ {};
    // The details of the parameters in the template. An empty array is returned if no data is available.
    shared_ptr<vector<DescribeLakebaseMountParameterGroupResponseBody::ParameterDetail>> parameterDetail_ {};
    // The description of the parameter template.
    shared_ptr<string> parameterGroupDesc_ {};
    // The parameter template ID.
    shared_ptr<string> parameterGroupId_ {};
    // The name of the parameter template.
    shared_ptr<string> parameterGroupName_ {};
    // The parameter templatetype. Valid values: 0: System. 1: User.
    shared_ptr<int32_t> parameterGroupType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
