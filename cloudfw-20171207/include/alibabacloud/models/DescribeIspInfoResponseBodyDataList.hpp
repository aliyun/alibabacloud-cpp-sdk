// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPINFORESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPINFORESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeIspInfoResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspInfoResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(IspId, ispId_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspInfoResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(IspId, ispId_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
    };
    DescribeIspInfoResponseBodyDataList() = default ;
    DescribeIspInfoResponseBodyDataList(const DescribeIspInfoResponseBodyDataList &) = default ;
    DescribeIspInfoResponseBodyDataList(DescribeIspInfoResponseBodyDataList &&) = default ;
    DescribeIspInfoResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspInfoResponseBodyDataList() = default ;
    DescribeIspInfoResponseBodyDataList& operator=(const DescribeIspInfoResponseBodyDataList &) = default ;
    DescribeIspInfoResponseBodyDataList& operator=(DescribeIspInfoResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ispId_ == nullptr
        && return this->ispName_ == nullptr; };
    // ispId Field Functions 
    bool hasIspId() const { return this->ispId_ != nullptr;};
    void deleteIspId() { this->ispId_ = nullptr;};
    inline int32_t ispId() const { DARABONBA_PTR_GET_DEFAULT(ispId_, 0) };
    inline DescribeIspInfoResponseBodyDataList& setIspId(int32_t ispId) { DARABONBA_PTR_SET_VALUE(ispId_, ispId) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeIspInfoResponseBodyDataList& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


  protected:
    std::shared_ptr<int32_t> ispId_ = nullptr;
    std::shared_ptr<string> ispName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
