// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOUTBOUNNUMLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOUTBOUNNUMLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOutbounNumListResponseBodyDataNum.hpp>
#include <alibabacloud/models/GetOutbounNumListResponseBodyDataNumGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetOutbounNumListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOutbounNumListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(NumGroup, numGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetOutbounNumListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(NumGroup, numGroup_);
    };
    GetOutbounNumListResponseBodyData() = default ;
    GetOutbounNumListResponseBodyData(const GetOutbounNumListResponseBodyData &) = default ;
    GetOutbounNumListResponseBodyData(GetOutbounNumListResponseBodyData &&) = default ;
    GetOutbounNumListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOutbounNumListResponseBodyData() = default ;
    GetOutbounNumListResponseBodyData& operator=(const GetOutbounNumListResponseBodyData &) = default ;
    GetOutbounNumListResponseBodyData& operator=(GetOutbounNumListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->num_ == nullptr
        && return this->numGroup_ == nullptr; };
    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline const vector<Models::GetOutbounNumListResponseBodyDataNum> & num() const { DARABONBA_PTR_GET_CONST(num_, vector<Models::GetOutbounNumListResponseBodyDataNum>) };
    inline vector<Models::GetOutbounNumListResponseBodyDataNum> num() { DARABONBA_PTR_GET(num_, vector<Models::GetOutbounNumListResponseBodyDataNum>) };
    inline GetOutbounNumListResponseBodyData& setNum(const vector<Models::GetOutbounNumListResponseBodyDataNum> & num) { DARABONBA_PTR_SET_VALUE(num_, num) };
    inline GetOutbounNumListResponseBodyData& setNum(vector<Models::GetOutbounNumListResponseBodyDataNum> && num) { DARABONBA_PTR_SET_RVALUE(num_, num) };


    // numGroup Field Functions 
    bool hasNumGroup() const { return this->numGroup_ != nullptr;};
    void deleteNumGroup() { this->numGroup_ = nullptr;};
    inline const vector<Models::GetOutbounNumListResponseBodyDataNumGroup> & numGroup() const { DARABONBA_PTR_GET_CONST(numGroup_, vector<Models::GetOutbounNumListResponseBodyDataNumGroup>) };
    inline vector<Models::GetOutbounNumListResponseBodyDataNumGroup> numGroup() { DARABONBA_PTR_GET(numGroup_, vector<Models::GetOutbounNumListResponseBodyDataNumGroup>) };
    inline GetOutbounNumListResponseBodyData& setNumGroup(const vector<Models::GetOutbounNumListResponseBodyDataNumGroup> & numGroup) { DARABONBA_PTR_SET_VALUE(numGroup_, numGroup) };
    inline GetOutbounNumListResponseBodyData& setNumGroup(vector<Models::GetOutbounNumListResponseBodyDataNumGroup> && numGroup) { DARABONBA_PTR_SET_RVALUE(numGroup_, numGroup) };


  protected:
    std::shared_ptr<vector<Models::GetOutbounNumListResponseBodyDataNum>> num_ = nullptr;
    std::shared_ptr<vector<Models::GetOutbounNumListResponseBodyDataNumGroup>> numGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
