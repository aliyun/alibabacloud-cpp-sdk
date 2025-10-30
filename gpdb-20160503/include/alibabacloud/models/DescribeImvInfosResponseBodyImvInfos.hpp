// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMVINFOSRESPONSEBODYIMVINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMVINFOSRESPONSEBODYIMVINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeIMVInfosResponseBodyImvInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIMVInfosResponseBodyImvInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Base, base_);
      DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_TO_JSON(MV, MV_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIMVInfosResponseBodyImvInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Base, base_);
      DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_FROM_JSON(MV, MV_);
    };
    DescribeIMVInfosResponseBodyImvInfos() = default ;
    DescribeIMVInfosResponseBodyImvInfos(const DescribeIMVInfosResponseBodyImvInfos &) = default ;
    DescribeIMVInfosResponseBodyImvInfos(DescribeIMVInfosResponseBodyImvInfos &&) = default ;
    DescribeIMVInfosResponseBodyImvInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIMVInfosResponseBodyImvInfos() = default ;
    DescribeIMVInfosResponseBodyImvInfos& operator=(const DescribeIMVInfosResponseBodyImvInfos &) = default ;
    DescribeIMVInfosResponseBodyImvInfos& operator=(DescribeIMVInfosResponseBodyImvInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->base_ == nullptr
        && return this->detailInfo_ == nullptr && return this->MV_ == nullptr; };
    // base Field Functions 
    bool hasBase() const { return this->base_ != nullptr;};
    void deleteBase() { this->base_ = nullptr;};
    inline string base() const { DARABONBA_PTR_GET_DEFAULT(base_, "") };
    inline DescribeIMVInfosResponseBodyImvInfos& setBase(string base) { DARABONBA_PTR_SET_VALUE(base_, base) };


    // detailInfo Field Functions 
    bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
    void deleteDetailInfo() { this->detailInfo_ = nullptr;};
    inline string detailInfo() const { DARABONBA_PTR_GET_DEFAULT(detailInfo_, "") };
    inline DescribeIMVInfosResponseBodyImvInfos& setDetailInfo(string detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };


    // MV Field Functions 
    bool hasMV() const { return this->MV_ != nullptr;};
    void deleteMV() { this->MV_ = nullptr;};
    inline string MV() const { DARABONBA_PTR_GET_DEFAULT(MV_, "") };
    inline DescribeIMVInfosResponseBodyImvInfos& setMV(string MV) { DARABONBA_PTR_SET_VALUE(MV_, MV) };


  protected:
    // The name of the table based on which the materialized view is created.
    std::shared_ptr<string> base_ = nullptr;
    // The dependency between the materialized view and the base table and all metric values, which can be used to build a lineage graph.
    std::shared_ptr<string> detailInfo_ = nullptr;
    // The name of the materialized view.
    std::shared_ptr<string> MV_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
