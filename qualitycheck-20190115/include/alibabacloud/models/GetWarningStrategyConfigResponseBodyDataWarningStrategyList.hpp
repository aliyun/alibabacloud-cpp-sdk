// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWARNINGSTRATEGYCONFIGRESPONSEBODYDATAWARNINGSTRATEGYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETWARNINGSTRATEGYCONFIGRESPONSEBODYDATAWARNINGSTRATEGYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetWarningStrategyConfigResponseBodyDataWarningStrategyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWarningStrategyConfigResponseBodyDataWarningStrategyList& obj) { 
      DARABONBA_PTR_TO_JSON(warningStrategyList, warningStrategyList_);
    };
    friend void from_json(const Darabonba::Json& j, GetWarningStrategyConfigResponseBodyDataWarningStrategyList& obj) { 
      DARABONBA_PTR_FROM_JSON(warningStrategyList, warningStrategyList_);
    };
    GetWarningStrategyConfigResponseBodyDataWarningStrategyList() = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyList(const GetWarningStrategyConfigResponseBodyDataWarningStrategyList &) = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyList(GetWarningStrategyConfigResponseBodyDataWarningStrategyList &&) = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWarningStrategyConfigResponseBodyDataWarningStrategyList() = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyList& operator=(const GetWarningStrategyConfigResponseBodyDataWarningStrategyList &) = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyList& operator=(GetWarningStrategyConfigResponseBodyDataWarningStrategyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->warningStrategyList_ == nullptr; };
    // warningStrategyList Field Functions 
    bool hasWarningStrategyList() const { return this->warningStrategyList_ != nullptr;};
    void deleteWarningStrategyList() { this->warningStrategyList_ = nullptr;};
    inline const vector<Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList> & warningStrategyList() const { DARABONBA_PTR_GET_CONST(warningStrategyList_, vector<Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList>) };
    inline vector<Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList> warningStrategyList() { DARABONBA_PTR_GET(warningStrategyList_, vector<Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList>) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyList& setWarningStrategyList(const vector<Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList> & warningStrategyList) { DARABONBA_PTR_SET_VALUE(warningStrategyList_, warningStrategyList) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyList& setWarningStrategyList(vector<Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList> && warningStrategyList) { DARABONBA_PTR_SET_RVALUE(warningStrategyList_, warningStrategyList) };


  protected:
    std::shared_ptr<vector<Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyList>> warningStrategyList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
