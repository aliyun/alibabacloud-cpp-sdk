// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKSTANDARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKSTANDARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckStandardResponseBodyStandards.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckStandardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckStandardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Standards, standards_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckStandardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Standards, standards_);
    };
    ListCheckStandardResponseBody() = default ;
    ListCheckStandardResponseBody(const ListCheckStandardResponseBody &) = default ;
    ListCheckStandardResponseBody(ListCheckStandardResponseBody &&) = default ;
    ListCheckStandardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckStandardResponseBody() = default ;
    ListCheckStandardResponseBody& operator=(const ListCheckStandardResponseBody &) = default ;
    ListCheckStandardResponseBody& operator=(ListCheckStandardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->standards_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckStandardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // standards Field Functions 
    bool hasStandards() const { return this->standards_ != nullptr;};
    void deleteStandards() { this->standards_ = nullptr;};
    inline const vector<ListCheckStandardResponseBodyStandards> & standards() const { DARABONBA_PTR_GET_CONST(standards_, vector<ListCheckStandardResponseBodyStandards>) };
    inline vector<ListCheckStandardResponseBodyStandards> standards() { DARABONBA_PTR_GET(standards_, vector<ListCheckStandardResponseBodyStandards>) };
    inline ListCheckStandardResponseBody& setStandards(const vector<ListCheckStandardResponseBodyStandards> & standards) { DARABONBA_PTR_SET_VALUE(standards_, standards) };
    inline ListCheckStandardResponseBody& setStandards(vector<ListCheckStandardResponseBodyStandards> && standards) { DARABONBA_PTR_SET_RVALUE(standards_, standards) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The standards.
    std::shared_ptr<vector<ListCheckStandardResponseBodyStandards>> standards_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
