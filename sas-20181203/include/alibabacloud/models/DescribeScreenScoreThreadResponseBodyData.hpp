// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENSCORETHREADRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENSCORETHREADRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeScreenScoreThreadResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenScoreThreadResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SocreThread, socreThread_);
      DARABONBA_PTR_TO_JSON(SocreThreadDate, socreThreadDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenScoreThreadResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SocreThread, socreThread_);
      DARABONBA_PTR_FROM_JSON(SocreThreadDate, socreThreadDate_);
    };
    DescribeScreenScoreThreadResponseBodyData() = default ;
    DescribeScreenScoreThreadResponseBodyData(const DescribeScreenScoreThreadResponseBodyData &) = default ;
    DescribeScreenScoreThreadResponseBodyData(DescribeScreenScoreThreadResponseBodyData &&) = default ;
    DescribeScreenScoreThreadResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenScoreThreadResponseBodyData() = default ;
    DescribeScreenScoreThreadResponseBodyData& operator=(const DescribeScreenScoreThreadResponseBodyData &) = default ;
    DescribeScreenScoreThreadResponseBodyData& operator=(DescribeScreenScoreThreadResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->socreThread_ != nullptr
        && this->socreThreadDate_ != nullptr; };
    // socreThread Field Functions 
    bool hasSocreThread() const { return this->socreThread_ != nullptr;};
    void deleteSocreThread() { this->socreThread_ = nullptr;};
    inline const vector<string> & socreThread() const { DARABONBA_PTR_GET_CONST(socreThread_, vector<string>) };
    inline vector<string> socreThread() { DARABONBA_PTR_GET(socreThread_, vector<string>) };
    inline DescribeScreenScoreThreadResponseBodyData& setSocreThread(const vector<string> & socreThread) { DARABONBA_PTR_SET_VALUE(socreThread_, socreThread) };
    inline DescribeScreenScoreThreadResponseBodyData& setSocreThread(vector<string> && socreThread) { DARABONBA_PTR_SET_RVALUE(socreThread_, socreThread) };


    // socreThreadDate Field Functions 
    bool hasSocreThreadDate() const { return this->socreThreadDate_ != nullptr;};
    void deleteSocreThreadDate() { this->socreThreadDate_ = nullptr;};
    inline const vector<string> & socreThreadDate() const { DARABONBA_PTR_GET_CONST(socreThreadDate_, vector<string>) };
    inline vector<string> socreThreadDate() { DARABONBA_PTR_GET(socreThreadDate_, vector<string>) };
    inline DescribeScreenScoreThreadResponseBodyData& setSocreThreadDate(const vector<string> & socreThreadDate) { DARABONBA_PTR_SET_VALUE(socreThreadDate_, socreThreadDate) };
    inline DescribeScreenScoreThreadResponseBodyData& setSocreThreadDate(vector<string> && socreThreadDate) { DARABONBA_PTR_SET_RVALUE(socreThreadDate_, socreThreadDate) };


  protected:
    // The trends of the scores on the security dashboard.
    std::shared_ptr<vector<string>> socreThread_ = nullptr;
    // The dates of the scores on the security dashboard.
    std::shared_ptr<vector<string>> socreThreadDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
