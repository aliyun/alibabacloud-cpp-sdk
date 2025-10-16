// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKTRAFFICTOPRATIORESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKTRAFFICTOPRATIORESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkTrafficTopRatioResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkTrafficTopRatioResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(DataName, dataName_);
      DARABONBA_PTR_TO_JSON(DataValue, dataValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkTrafficTopRatioResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(DataName, dataName_);
      DARABONBA_PTR_FROM_JSON(DataValue, dataValue_);
    };
    DescribeNetworkTrafficTopRatioResponseBodyDataList() = default ;
    DescribeNetworkTrafficTopRatioResponseBodyDataList(const DescribeNetworkTrafficTopRatioResponseBodyDataList &) = default ;
    DescribeNetworkTrafficTopRatioResponseBodyDataList(DescribeNetworkTrafficTopRatioResponseBodyDataList &&) = default ;
    DescribeNetworkTrafficTopRatioResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkTrafficTopRatioResponseBodyDataList() = default ;
    DescribeNetworkTrafficTopRatioResponseBodyDataList& operator=(const DescribeNetworkTrafficTopRatioResponseBodyDataList &) = default ;
    DescribeNetworkTrafficTopRatioResponseBodyDataList& operator=(DescribeNetworkTrafficTopRatioResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataName_ == nullptr
        && return this->dataValue_ == nullptr; };
    // dataName Field Functions 
    bool hasDataName() const { return this->dataName_ != nullptr;};
    void deleteDataName() { this->dataName_ = nullptr;};
    inline string dataName() const { DARABONBA_PTR_GET_DEFAULT(dataName_, "") };
    inline DescribeNetworkTrafficTopRatioResponseBodyDataList& setDataName(string dataName) { DARABONBA_PTR_SET_VALUE(dataName_, dataName) };


    // dataValue Field Functions 
    bool hasDataValue() const { return this->dataValue_ != nullptr;};
    void deleteDataValue() { this->dataValue_ = nullptr;};
    inline string dataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
    inline DescribeNetworkTrafficTopRatioResponseBodyDataList& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


  protected:
    std::shared_ptr<string> dataName_ = nullptr;
    std::shared_ptr<string> dataValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
