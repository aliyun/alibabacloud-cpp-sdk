// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMOBILESCARDSUPPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKMOBILESCARDSUPPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckMobilesCardSupportResponseBodyDataQueryResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CheckMobilesCardSupportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckMobilesCardSupportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(queryResult, queryResult_);
    };
    friend void from_json(const Darabonba::Json& j, CheckMobilesCardSupportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(queryResult, queryResult_);
    };
    CheckMobilesCardSupportResponseBodyData() = default ;
    CheckMobilesCardSupportResponseBodyData(const CheckMobilesCardSupportResponseBodyData &) = default ;
    CheckMobilesCardSupportResponseBodyData(CheckMobilesCardSupportResponseBodyData &&) = default ;
    CheckMobilesCardSupportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckMobilesCardSupportResponseBodyData() = default ;
    CheckMobilesCardSupportResponseBodyData& operator=(const CheckMobilesCardSupportResponseBodyData &) = default ;
    CheckMobilesCardSupportResponseBodyData& operator=(CheckMobilesCardSupportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryResult_ == nullptr; };
    // queryResult Field Functions 
    bool hasQueryResult() const { return this->queryResult_ != nullptr;};
    void deleteQueryResult() { this->queryResult_ = nullptr;};
    inline const vector<Models::CheckMobilesCardSupportResponseBodyDataQueryResult> & queryResult() const { DARABONBA_PTR_GET_CONST(queryResult_, vector<Models::CheckMobilesCardSupportResponseBodyDataQueryResult>) };
    inline vector<Models::CheckMobilesCardSupportResponseBodyDataQueryResult> queryResult() { DARABONBA_PTR_GET(queryResult_, vector<Models::CheckMobilesCardSupportResponseBodyDataQueryResult>) };
    inline CheckMobilesCardSupportResponseBodyData& setQueryResult(const vector<Models::CheckMobilesCardSupportResponseBodyDataQueryResult> & queryResult) { DARABONBA_PTR_SET_VALUE(queryResult_, queryResult) };
    inline CheckMobilesCardSupportResponseBodyData& setQueryResult(vector<Models::CheckMobilesCardSupportResponseBodyDataQueryResult> && queryResult) { DARABONBA_PTR_SET_RVALUE(queryResult_, queryResult) };


  protected:
    // The list of returned results.
    std::shared_ptr<vector<Models::CheckMobilesCardSupportResponseBodyDataQueryResult>> queryResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
