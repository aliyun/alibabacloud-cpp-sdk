// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADVANCECONFIGDIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTADVANCECONFIGDIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAdvanceConfigDirResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListAdvanceConfigDirResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAdvanceConfigDirResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListAdvanceConfigDirResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListAdvanceConfigDirResponseBody() = default ;
    ListAdvanceConfigDirResponseBody(const ListAdvanceConfigDirResponseBody &) = default ;
    ListAdvanceConfigDirResponseBody(ListAdvanceConfigDirResponseBody &&) = default ;
    ListAdvanceConfigDirResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAdvanceConfigDirResponseBody() = default ;
    ListAdvanceConfigDirResponseBody& operator=(const ListAdvanceConfigDirResponseBody &) = default ;
    ListAdvanceConfigDirResponseBody& operator=(ListAdvanceConfigDirResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAdvanceConfigDirResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAdvanceConfigDirResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAdvanceConfigDirResponseBodyResult>) };
    inline vector<ListAdvanceConfigDirResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListAdvanceConfigDirResponseBodyResult>) };
    inline ListAdvanceConfigDirResponseBody& setResult(const vector<ListAdvanceConfigDirResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAdvanceConfigDirResponseBody& setResult(vector<ListAdvanceConfigDirResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The advanced configuration files.
    std::shared_ptr<vector<ListAdvanceConfigDirResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
