// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetTrafficTopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetTrafficTopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCount, dataCount_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetTrafficTopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInternetTrafficTopResponseBody() = default ;
    DescribeInternetTrafficTopResponseBody(const DescribeInternetTrafficTopResponseBody &) = default ;
    DescribeInternetTrafficTopResponseBody(DescribeInternetTrafficTopResponseBody &&) = default ;
    DescribeInternetTrafficTopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetTrafficTopResponseBody() = default ;
    DescribeInternetTrafficTopResponseBody& operator=(const DescribeInternetTrafficTopResponseBody &) = default ;
    DescribeInternetTrafficTopResponseBody& operator=(DescribeInternetTrafficTopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(DataName, dataName_);
        DARABONBA_PTR_TO_JSON(DataValue, dataValue_);
        DARABONBA_PTR_TO_JSON(IsSubscribed, isSubscribed_);
        DARABONBA_PTR_TO_JSON(LabelList, labelList_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(DataName, dataName_);
        DARABONBA_PTR_FROM_JSON(DataValue, dataValue_);
        DARABONBA_PTR_FROM_JSON(IsSubscribed, isSubscribed_);
        DARABONBA_PTR_FROM_JSON(LabelList, labelList_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataName_ == nullptr
        && this->dataValue_ == nullptr && this->isSubscribed_ == nullptr && this->labelList_ == nullptr && this->sessionCount_ == nullptr && this->totalBytes_ == nullptr; };
      // dataName Field Functions 
      bool hasDataName() const { return this->dataName_ != nullptr;};
      void deleteDataName() { this->dataName_ = nullptr;};
      inline string getDataName() const { DARABONBA_PTR_GET_DEFAULT(dataName_, "") };
      inline DataList& setDataName(string dataName) { DARABONBA_PTR_SET_VALUE(dataName_, dataName) };


      // dataValue Field Functions 
      bool hasDataValue() const { return this->dataValue_ != nullptr;};
      void deleteDataValue() { this->dataValue_ = nullptr;};
      inline string getDataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
      inline DataList& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


      // isSubscribed Field Functions 
      bool hasIsSubscribed() const { return this->isSubscribed_ != nullptr;};
      void deleteIsSubscribed() { this->isSubscribed_ = nullptr;};
      inline bool getIsSubscribed() const { DARABONBA_PTR_GET_DEFAULT(isSubscribed_, false) };
      inline DataList& setIsSubscribed(bool isSubscribed) { DARABONBA_PTR_SET_VALUE(isSubscribed_, isSubscribed) };


      // labelList Field Functions 
      bool hasLabelList() const { return this->labelList_ != nullptr;};
      void deleteLabelList() { this->labelList_ = nullptr;};
      inline const vector<string> & getLabelList() const { DARABONBA_PTR_GET_CONST(labelList_, vector<string>) };
      inline vector<string> getLabelList() { DARABONBA_PTR_GET(labelList_, vector<string>) };
      inline DataList& setLabelList(const vector<string> & labelList) { DARABONBA_PTR_SET_VALUE(labelList_, labelList) };
      inline DataList& setLabelList(vector<string> && labelList) { DARABONBA_PTR_SET_RVALUE(labelList_, labelList) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
      inline DataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    protected:
      shared_ptr<string> dataName_ {};
      shared_ptr<string> dataValue_ {};
      shared_ptr<bool> isSubscribed_ {};
      shared_ptr<vector<string>> labelList_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<int64_t> totalBytes_ {};
    };

    virtual bool empty() const override { return this->dataCount_ == nullptr
        && this->dataList_ == nullptr && this->dataType_ == nullptr && this->requestId_ == nullptr; };
    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int32_t getDataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0) };
    inline DescribeInternetTrafficTopResponseBody& setDataCount(int32_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetTrafficTopResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetTrafficTopResponseBody::DataList>) };
    inline vector<DescribeInternetTrafficTopResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetTrafficTopResponseBody::DataList>) };
    inline DescribeInternetTrafficTopResponseBody& setDataList(const vector<DescribeInternetTrafficTopResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetTrafficTopResponseBody& setDataList(vector<DescribeInternetTrafficTopResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeInternetTrafficTopResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetTrafficTopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> dataCount_ {};
    shared_ptr<vector<DescribeInternetTrafficTopResponseBody::DataList>> dataList_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
