// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTDBLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTDBLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHotDbListResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeHotDbListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotDbListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(RandomCode, randomCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotDbListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(RandomCode, randomCode_);
    };
    DescribeHotDbListResponseBodyData() = default ;
    DescribeHotDbListResponseBodyData(const DescribeHotDbListResponseBodyData &) = default ;
    DescribeHotDbListResponseBodyData(DescribeHotDbListResponseBodyData &&) = default ;
    DescribeHotDbListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotDbListResponseBodyData() = default ;
    DescribeHotDbListResponseBodyData& operator=(const DescribeHotDbListResponseBodyData &) = default ;
    DescribeHotDbListResponseBodyData& operator=(DescribeHotDbListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->randomCode_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const Models::DescribeHotDbListResponseBodyDataList & list() const { DARABONBA_PTR_GET_CONST(list_, Models::DescribeHotDbListResponseBodyDataList) };
    inline Models::DescribeHotDbListResponseBodyDataList list() { DARABONBA_PTR_GET(list_, Models::DescribeHotDbListResponseBodyDataList) };
    inline DescribeHotDbListResponseBodyData& setList(const Models::DescribeHotDbListResponseBodyDataList & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeHotDbListResponseBodyData& setList(Models::DescribeHotDbListResponseBodyDataList && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // randomCode Field Functions 
    bool hasRandomCode() const { return this->randomCode_ != nullptr;};
    void deleteRandomCode() { this->randomCode_ = nullptr;};
    inline string randomCode() const { DARABONBA_PTR_GET_DEFAULT(randomCode_, "") };
    inline DescribeHotDbListResponseBodyData& setRandomCode(string randomCode) { DARABONBA_PTR_SET_VALUE(randomCode_, randomCode) };


  protected:
    // The information about the databases on which hot-spot scale-out is performed.
    std::shared_ptr<Models::DescribeHotDbListResponseBodyDataList> list_ = nullptr;
    // The random number.
    std::shared_ptr<string> randomCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
