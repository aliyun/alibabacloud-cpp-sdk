// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSOLEFUNCGRAYSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONSOLEFUNCGRAYSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetConsoleFuncGrayStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsoleFuncGrayStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeApiList, excludeApiList_);
      DARABONBA_PTR_TO_JSON(Hit, hit_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsoleFuncGrayStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeApiList, excludeApiList_);
      DARABONBA_PTR_FROM_JSON(Hit, hit_);
    };
    GetConsoleFuncGrayStatusResponseBodyData() = default ;
    GetConsoleFuncGrayStatusResponseBodyData(const GetConsoleFuncGrayStatusResponseBodyData &) = default ;
    GetConsoleFuncGrayStatusResponseBodyData(GetConsoleFuncGrayStatusResponseBodyData &&) = default ;
    GetConsoleFuncGrayStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsoleFuncGrayStatusResponseBodyData() = default ;
    GetConsoleFuncGrayStatusResponseBodyData& operator=(const GetConsoleFuncGrayStatusResponseBodyData &) = default ;
    GetConsoleFuncGrayStatusResponseBodyData& operator=(GetConsoleFuncGrayStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->excludeApiList_ != nullptr
        && this->hit_ != nullptr; };
    // excludeApiList Field Functions 
    bool hasExcludeApiList() const { return this->excludeApiList_ != nullptr;};
    void deleteExcludeApiList() { this->excludeApiList_ = nullptr;};
    inline const vector<Models::GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList> & excludeApiList() const { DARABONBA_PTR_GET_CONST(excludeApiList_, vector<Models::GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList>) };
    inline vector<Models::GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList> excludeApiList() { DARABONBA_PTR_GET(excludeApiList_, vector<Models::GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList>) };
    inline GetConsoleFuncGrayStatusResponseBodyData& setExcludeApiList(const vector<Models::GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList> & excludeApiList) { DARABONBA_PTR_SET_VALUE(excludeApiList_, excludeApiList) };
    inline GetConsoleFuncGrayStatusResponseBodyData& setExcludeApiList(vector<Models::GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList> && excludeApiList) { DARABONBA_PTR_SET_RVALUE(excludeApiList_, excludeApiList) };


    // hit Field Functions 
    bool hasHit() const { return this->hit_ != nullptr;};
    void deleteHit() { this->hit_ = nullptr;};
    inline bool hit() const { DARABONBA_PTR_GET_DEFAULT(hit_, false) };
    inline GetConsoleFuncGrayStatusResponseBodyData& setHit(bool hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


  protected:
    // List of APIs not hit.
    std::shared_ptr<vector<Models::GetConsoleFuncGrayStatusResponseBodyDataExcludeApiList>> excludeApiList_ = nullptr;
    // Whether it hits the gray status.
    std::shared_ptr<bool> hit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
