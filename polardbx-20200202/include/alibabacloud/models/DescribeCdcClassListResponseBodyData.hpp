// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDCCLASSLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDCCLASSLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdcClassListResponseBodyDataClassCodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCdcClassListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdcClassListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCodeList, classCodeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdcClassListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCodeList, classCodeList_);
    };
    DescribeCdcClassListResponseBodyData() = default ;
    DescribeCdcClassListResponseBodyData(const DescribeCdcClassListResponseBodyData &) = default ;
    DescribeCdcClassListResponseBodyData(DescribeCdcClassListResponseBodyData &&) = default ;
    DescribeCdcClassListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdcClassListResponseBodyData() = default ;
    DescribeCdcClassListResponseBodyData& operator=(const DescribeCdcClassListResponseBodyData &) = default ;
    DescribeCdcClassListResponseBodyData& operator=(DescribeCdcClassListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCodeList_ == nullptr; };
    // classCodeList Field Functions 
    bool hasClassCodeList() const { return this->classCodeList_ != nullptr;};
    void deleteClassCodeList() { this->classCodeList_ = nullptr;};
    inline const vector<Models::DescribeCdcClassListResponseBodyDataClassCodeList> & classCodeList() const { DARABONBA_PTR_GET_CONST(classCodeList_, vector<Models::DescribeCdcClassListResponseBodyDataClassCodeList>) };
    inline vector<Models::DescribeCdcClassListResponseBodyDataClassCodeList> classCodeList() { DARABONBA_PTR_GET(classCodeList_, vector<Models::DescribeCdcClassListResponseBodyDataClassCodeList>) };
    inline DescribeCdcClassListResponseBodyData& setClassCodeList(const vector<Models::DescribeCdcClassListResponseBodyDataClassCodeList> & classCodeList) { DARABONBA_PTR_SET_VALUE(classCodeList_, classCodeList) };
    inline DescribeCdcClassListResponseBodyData& setClassCodeList(vector<Models::DescribeCdcClassListResponseBodyDataClassCodeList> && classCodeList) { DARABONBA_PTR_SET_RVALUE(classCodeList_, classCodeList) };


  protected:
    // array
    std::shared_ptr<vector<Models::DescribeCdcClassListResponseBodyDataClassCodeList>> classCodeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
