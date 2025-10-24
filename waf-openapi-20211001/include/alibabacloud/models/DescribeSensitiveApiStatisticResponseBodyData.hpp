// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEAPISTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEAPISTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSensitiveApiStatisticResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveApiStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveApiStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InfoOutboundCount, infoOutboundCount_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_TO_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveApiStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoOutboundCount, infoOutboundCount_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_FROM_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
    };
    DescribeSensitiveApiStatisticResponseBodyData() = default ;
    DescribeSensitiveApiStatisticResponseBodyData(const DescribeSensitiveApiStatisticResponseBodyData &) = default ;
    DescribeSensitiveApiStatisticResponseBodyData(DescribeSensitiveApiStatisticResponseBodyData &&) = default ;
    DescribeSensitiveApiStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveApiStatisticResponseBodyData() = default ;
    DescribeSensitiveApiStatisticResponseBodyData& operator=(const DescribeSensitiveApiStatisticResponseBodyData &) = default ;
    DescribeSensitiveApiStatisticResponseBodyData& operator=(DescribeSensitiveApiStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->infoOutboundCount_ == nullptr
        && return this->list_ == nullptr && return this->matchedHost_ == nullptr && return this->sensitiveOutboundCount_ == nullptr; };
    // infoOutboundCount Field Functions 
    bool hasInfoOutboundCount() const { return this->infoOutboundCount_ != nullptr;};
    void deleteInfoOutboundCount() { this->infoOutboundCount_ = nullptr;};
    inline int64_t infoOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(infoOutboundCount_, 0L) };
    inline DescribeSensitiveApiStatisticResponseBodyData& setInfoOutboundCount(int64_t infoOutboundCount) { DARABONBA_PTR_SET_VALUE(infoOutboundCount_, infoOutboundCount) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::DescribeSensitiveApiStatisticResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::DescribeSensitiveApiStatisticResponseBodyDataList>) };
    inline vector<Models::DescribeSensitiveApiStatisticResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::DescribeSensitiveApiStatisticResponseBodyDataList>) };
    inline DescribeSensitiveApiStatisticResponseBodyData& setList(const vector<Models::DescribeSensitiveApiStatisticResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeSensitiveApiStatisticResponseBodyData& setList(vector<Models::DescribeSensitiveApiStatisticResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeSensitiveApiStatisticResponseBodyData& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // sensitiveOutboundCount Field Functions 
    bool hasSensitiveOutboundCount() const { return this->sensitiveOutboundCount_ != nullptr;};
    void deleteSensitiveOutboundCount() { this->sensitiveOutboundCount_ = nullptr;};
    inline int64_t sensitiveOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveOutboundCount_, 0L) };
    inline DescribeSensitiveApiStatisticResponseBodyData& setSensitiveOutboundCount(int64_t sensitiveOutboundCount) { DARABONBA_PTR_SET_VALUE(sensitiveOutboundCount_, sensitiveOutboundCount) };


  protected:
    // The number of personal information records involved in cross-border data transfer by domain name.
    std::shared_ptr<int64_t> infoOutboundCount_ = nullptr;
    // The domain name-related APIs.
    std::shared_ptr<vector<Models::DescribeSensitiveApiStatisticResponseBodyDataList>> list_ = nullptr;
    // The domain name or IP address.
    std::shared_ptr<string> matchedHost_ = nullptr;
    // The number of sensitive personal information records involved in cross-border data transfer by domain name.
    std::shared_ptr<int64_t> sensitiveOutboundCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
