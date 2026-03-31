// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserAbnormalTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAbnormalTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Abnormal, abnormal_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAbnormalTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Abnormal, abnormal_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserAbnormalTypeResponseBody() = default ;
    DescribeUserAbnormalTypeResponseBody(const DescribeUserAbnormalTypeResponseBody &) = default ;
    DescribeUserAbnormalTypeResponseBody(DescribeUserAbnormalTypeResponseBody &&) = default ;
    DescribeUserAbnormalTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAbnormalTypeResponseBody() = default ;
    DescribeUserAbnormalTypeResponseBody& operator=(const DescribeUserAbnormalTypeResponseBody &) = default ;
    DescribeUserAbnormalTypeResponseBody& operator=(DescribeUserAbnormalTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Abnormal : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Abnormal& obj) { 
        DARABONBA_PTR_TO_JSON(AbnormalCode, abnormalCode_);
        DARABONBA_PTR_TO_JSON(AbnormalCount, abnormalCount_);
        DARABONBA_PTR_TO_JSON(AbnormalParentType, abnormalParentType_);
        DARABONBA_PTR_TO_JSON(AbnormalType, abnormalType_);
      };
      friend void from_json(const Darabonba::Json& j, Abnormal& obj) { 
        DARABONBA_PTR_FROM_JSON(AbnormalCode, abnormalCode_);
        DARABONBA_PTR_FROM_JSON(AbnormalCount, abnormalCount_);
        DARABONBA_PTR_FROM_JSON(AbnormalParentType, abnormalParentType_);
        DARABONBA_PTR_FROM_JSON(AbnormalType, abnormalType_);
      };
      Abnormal() = default ;
      Abnormal(const Abnormal &) = default ;
      Abnormal(Abnormal &&) = default ;
      Abnormal(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Abnormal() = default ;
      Abnormal& operator=(const Abnormal &) = default ;
      Abnormal& operator=(Abnormal &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abnormalCode_ == nullptr
        && this->abnormalCount_ == nullptr && this->abnormalParentType_ == nullptr && this->abnormalType_ == nullptr; };
      // abnormalCode Field Functions 
      bool hasAbnormalCode() const { return this->abnormalCode_ != nullptr;};
      void deleteAbnormalCode() { this->abnormalCode_ = nullptr;};
      inline string getAbnormalCode() const { DARABONBA_PTR_GET_DEFAULT(abnormalCode_, "") };
      inline Abnormal& setAbnormalCode(string abnormalCode) { DARABONBA_PTR_SET_VALUE(abnormalCode_, abnormalCode) };


      // abnormalCount Field Functions 
      bool hasAbnormalCount() const { return this->abnormalCount_ != nullptr;};
      void deleteAbnormalCount() { this->abnormalCount_ = nullptr;};
      inline int64_t getAbnormalCount() const { DARABONBA_PTR_GET_DEFAULT(abnormalCount_, 0L) };
      inline Abnormal& setAbnormalCount(int64_t abnormalCount) { DARABONBA_PTR_SET_VALUE(abnormalCount_, abnormalCount) };


      // abnormalParentType Field Functions 
      bool hasAbnormalParentType() const { return this->abnormalParentType_ != nullptr;};
      void deleteAbnormalParentType() { this->abnormalParentType_ = nullptr;};
      inline string getAbnormalParentType() const { DARABONBA_PTR_GET_DEFAULT(abnormalParentType_, "") };
      inline Abnormal& setAbnormalParentType(string abnormalParentType) { DARABONBA_PTR_SET_VALUE(abnormalParentType_, abnormalParentType) };


      // abnormalType Field Functions 
      bool hasAbnormalType() const { return this->abnormalType_ != nullptr;};
      void deleteAbnormalType() { this->abnormalType_ = nullptr;};
      inline string getAbnormalType() const { DARABONBA_PTR_GET_DEFAULT(abnormalType_, "") };
      inline Abnormal& setAbnormalType(string abnormalType) { DARABONBA_PTR_SET_VALUE(abnormalType_, abnormalType) };


    protected:
      // The code of the risk.
      shared_ptr<string> abnormalCode_ {};
      // The number of risks.
      shared_ptr<int64_t> abnormalCount_ {};
      // The parent type of the risk.
      shared_ptr<string> abnormalParentType_ {};
      // The type of the risk.
      // 
      // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of risks.
      shared_ptr<string> abnormalType_ {};
    };

    virtual bool empty() const override { return this->abnormal_ == nullptr
        && this->requestId_ == nullptr; };
    // abnormal Field Functions 
    bool hasAbnormal() const { return this->abnormal_ != nullptr;};
    void deleteAbnormal() { this->abnormal_ = nullptr;};
    inline const vector<DescribeUserAbnormalTypeResponseBody::Abnormal> & getAbnormal() const { DARABONBA_PTR_GET_CONST(abnormal_, vector<DescribeUserAbnormalTypeResponseBody::Abnormal>) };
    inline vector<DescribeUserAbnormalTypeResponseBody::Abnormal> getAbnormal() { DARABONBA_PTR_GET(abnormal_, vector<DescribeUserAbnormalTypeResponseBody::Abnormal>) };
    inline DescribeUserAbnormalTypeResponseBody& setAbnormal(const vector<DescribeUserAbnormalTypeResponseBody::Abnormal> & abnormal) { DARABONBA_PTR_SET_VALUE(abnormal_, abnormal) };
    inline DescribeUserAbnormalTypeResponseBody& setAbnormal(vector<DescribeUserAbnormalTypeResponseBody::Abnormal> && abnormal) { DARABONBA_PTR_SET_RVALUE(abnormal_, abnormal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserAbnormalTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The types and statistics of risks.
    shared_ptr<vector<DescribeUserAbnormalTypeResponseBody::Abnormal>> abnormal_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
