// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESASPMAGENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESASPMAGENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSasPmAgentListResponseBodySasPmAgentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSasPmAgentListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSasPmAgentListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SasPmAgentList, sasPmAgentList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSasPmAgentListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SasPmAgentList, sasPmAgentList_);
    };
    DescribeSasPmAgentListResponseBody() = default ;
    DescribeSasPmAgentListResponseBody(const DescribeSasPmAgentListResponseBody &) = default ;
    DescribeSasPmAgentListResponseBody(DescribeSasPmAgentListResponseBody &&) = default ;
    DescribeSasPmAgentListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSasPmAgentListResponseBody() = default ;
    DescribeSasPmAgentListResponseBody& operator=(const DescribeSasPmAgentListResponseBody &) = default ;
    DescribeSasPmAgentListResponseBody& operator=(DescribeSasPmAgentListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sasPmAgentList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSasPmAgentListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sasPmAgentList Field Functions 
    bool hasSasPmAgentList() const { return this->sasPmAgentList_ != nullptr;};
    void deleteSasPmAgentList() { this->sasPmAgentList_ = nullptr;};
    inline const vector<DescribeSasPmAgentListResponseBodySasPmAgentList> & sasPmAgentList() const { DARABONBA_PTR_GET_CONST(sasPmAgentList_, vector<DescribeSasPmAgentListResponseBodySasPmAgentList>) };
    inline vector<DescribeSasPmAgentListResponseBodySasPmAgentList> sasPmAgentList() { DARABONBA_PTR_GET(sasPmAgentList_, vector<DescribeSasPmAgentListResponseBodySasPmAgentList>) };
    inline DescribeSasPmAgentListResponseBody& setSasPmAgentList(const vector<DescribeSasPmAgentListResponseBodySasPmAgentList> & sasPmAgentList) { DARABONBA_PTR_SET_VALUE(sasPmAgentList_, sasPmAgentList) };
    inline DescribeSasPmAgentListResponseBody& setSasPmAgentList(vector<DescribeSasPmAgentListResponseBodySasPmAgentList> && sasPmAgentList) { DARABONBA_PTR_SET_RVALUE(sasPmAgentList_, sasPmAgentList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the information about servers.
    std::shared_ptr<vector<DescribeSasPmAgentListResponseBodySasPmAgentList>> sasPmAgentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
