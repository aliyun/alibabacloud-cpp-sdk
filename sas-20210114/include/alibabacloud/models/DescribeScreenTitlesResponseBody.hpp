// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENTITLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENTITLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScreenTitlesResponseBodySasScreenSettingList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenTitlesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenTitlesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SasScreenSettingList, sasScreenSettingList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenTitlesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SasScreenSettingList, sasScreenSettingList_);
    };
    DescribeScreenTitlesResponseBody() = default ;
    DescribeScreenTitlesResponseBody(const DescribeScreenTitlesResponseBody &) = default ;
    DescribeScreenTitlesResponseBody(DescribeScreenTitlesResponseBody &&) = default ;
    DescribeScreenTitlesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenTitlesResponseBody() = default ;
    DescribeScreenTitlesResponseBody& operator=(const DescribeScreenTitlesResponseBody &) = default ;
    DescribeScreenTitlesResponseBody& operator=(DescribeScreenTitlesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sasScreenSettingList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScreenTitlesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sasScreenSettingList Field Functions 
    bool hasSasScreenSettingList() const { return this->sasScreenSettingList_ != nullptr;};
    void deleteSasScreenSettingList() { this->sasScreenSettingList_ = nullptr;};
    inline const vector<DescribeScreenTitlesResponseBodySasScreenSettingList> & sasScreenSettingList() const { DARABONBA_PTR_GET_CONST(sasScreenSettingList_, vector<DescribeScreenTitlesResponseBodySasScreenSettingList>) };
    inline vector<DescribeScreenTitlesResponseBodySasScreenSettingList> sasScreenSettingList() { DARABONBA_PTR_GET(sasScreenSettingList_, vector<DescribeScreenTitlesResponseBodySasScreenSettingList>) };
    inline DescribeScreenTitlesResponseBody& setSasScreenSettingList(const vector<DescribeScreenTitlesResponseBodySasScreenSettingList> & sasScreenSettingList) { DARABONBA_PTR_SET_VALUE(sasScreenSettingList_, sasScreenSettingList) };
    inline DescribeScreenTitlesResponseBody& setSasScreenSettingList(vector<DescribeScreenTitlesResponseBodySasScreenSettingList> && sasScreenSettingList) { DARABONBA_PTR_SET_RVALUE(sasScreenSettingList_, sasScreenSettingList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeScreenTitlesResponseBodySasScreenSettingList>> sasScreenSettingList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
