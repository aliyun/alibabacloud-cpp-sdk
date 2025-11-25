// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTOPRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTOPRESPONSEBODYDATALIST_HPP_
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
  class DescribeInternetTrafficTopResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetTrafficTopResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(DataName, dataName_);
      DARABONBA_PTR_TO_JSON(DataValue, dataValue_);
      DARABONBA_PTR_TO_JSON(IsSubscribed, isSubscribed_);
      DARABONBA_PTR_TO_JSON(LabelList, labelList_);
      DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetTrafficTopResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(DataName, dataName_);
      DARABONBA_PTR_FROM_JSON(DataValue, dataValue_);
      DARABONBA_PTR_FROM_JSON(IsSubscribed, isSubscribed_);
      DARABONBA_PTR_FROM_JSON(LabelList, labelList_);
      DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
    };
    DescribeInternetTrafficTopResponseBodyDataList() = default ;
    DescribeInternetTrafficTopResponseBodyDataList(const DescribeInternetTrafficTopResponseBodyDataList &) = default ;
    DescribeInternetTrafficTopResponseBodyDataList(DescribeInternetTrafficTopResponseBodyDataList &&) = default ;
    DescribeInternetTrafficTopResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetTrafficTopResponseBodyDataList() = default ;
    DescribeInternetTrafficTopResponseBodyDataList& operator=(const DescribeInternetTrafficTopResponseBodyDataList &) = default ;
    DescribeInternetTrafficTopResponseBodyDataList& operator=(DescribeInternetTrafficTopResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataName_ == nullptr
        && return this->dataValue_ == nullptr && return this->isSubscribed_ == nullptr && return this->labelList_ == nullptr && return this->sessionCount_ == nullptr && return this->totalBytes_ == nullptr; };
    // dataName Field Functions 
    bool hasDataName() const { return this->dataName_ != nullptr;};
    void deleteDataName() { this->dataName_ = nullptr;};
    inline string dataName() const { DARABONBA_PTR_GET_DEFAULT(dataName_, "") };
    inline DescribeInternetTrafficTopResponseBodyDataList& setDataName(string dataName) { DARABONBA_PTR_SET_VALUE(dataName_, dataName) };


    // dataValue Field Functions 
    bool hasDataValue() const { return this->dataValue_ != nullptr;};
    void deleteDataValue() { this->dataValue_ = nullptr;};
    inline string dataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
    inline DescribeInternetTrafficTopResponseBodyDataList& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


    // isSubscribed Field Functions 
    bool hasIsSubscribed() const { return this->isSubscribed_ != nullptr;};
    void deleteIsSubscribed() { this->isSubscribed_ = nullptr;};
    inline bool isSubscribed() const { DARABONBA_PTR_GET_DEFAULT(isSubscribed_, false) };
    inline DescribeInternetTrafficTopResponseBodyDataList& setIsSubscribed(bool isSubscribed) { DARABONBA_PTR_SET_VALUE(isSubscribed_, isSubscribed) };


    // labelList Field Functions 
    bool hasLabelList() const { return this->labelList_ != nullptr;};
    void deleteLabelList() { this->labelList_ = nullptr;};
    inline const vector<string> & labelList() const { DARABONBA_PTR_GET_CONST(labelList_, vector<string>) };
    inline vector<string> labelList() { DARABONBA_PTR_GET(labelList_, vector<string>) };
    inline DescribeInternetTrafficTopResponseBodyDataList& setLabelList(const vector<string> & labelList) { DARABONBA_PTR_SET_VALUE(labelList_, labelList) };
    inline DescribeInternetTrafficTopResponseBodyDataList& setLabelList(vector<string> && labelList) { DARABONBA_PTR_SET_RVALUE(labelList_, labelList) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeInternetTrafficTopResponseBodyDataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline DescribeInternetTrafficTopResponseBodyDataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


  protected:
    std::shared_ptr<string> dataName_ = nullptr;
    std::shared_ptr<string> dataValue_ = nullptr;
    std::shared_ptr<bool> isSubscribed_ = nullptr;
    std::shared_ptr<vector<string>> labelList_ = nullptr;
    std::shared_ptr<int64_t> sessionCount_ = nullptr;
    std::shared_ptr<int64_t> totalBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
