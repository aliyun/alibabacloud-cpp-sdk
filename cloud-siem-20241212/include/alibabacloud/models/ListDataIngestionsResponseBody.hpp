// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINGESTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINGESTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataIngestionsResponseBodyDataIngestions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataIngestionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataIngestionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestions, dataIngestions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataIngestionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestions, dataIngestions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataIngestionsResponseBody() = default ;
    ListDataIngestionsResponseBody(const ListDataIngestionsResponseBody &) = default ;
    ListDataIngestionsResponseBody(ListDataIngestionsResponseBody &&) = default ;
    ListDataIngestionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataIngestionsResponseBody() = default ;
    ListDataIngestionsResponseBody& operator=(const ListDataIngestionsResponseBody &) = default ;
    ListDataIngestionsResponseBody& operator=(ListDataIngestionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestions_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataIngestions Field Functions 
    bool hasDataIngestions() const { return this->dataIngestions_ != nullptr;};
    void deleteDataIngestions() { this->dataIngestions_ = nullptr;};
    inline const vector<ListDataIngestionsResponseBodyDataIngestions> & dataIngestions() const { DARABONBA_PTR_GET_CONST(dataIngestions_, vector<ListDataIngestionsResponseBodyDataIngestions>) };
    inline vector<ListDataIngestionsResponseBodyDataIngestions> dataIngestions() { DARABONBA_PTR_GET(dataIngestions_, vector<ListDataIngestionsResponseBodyDataIngestions>) };
    inline ListDataIngestionsResponseBody& setDataIngestions(const vector<ListDataIngestionsResponseBodyDataIngestions> & dataIngestions) { DARABONBA_PTR_SET_VALUE(dataIngestions_, dataIngestions) };
    inline ListDataIngestionsResponseBody& setDataIngestions(vector<ListDataIngestionsResponseBodyDataIngestions> && dataIngestions) { DARABONBA_PTR_SET_RVALUE(dataIngestions_, dataIngestions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataIngestionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListDataIngestionsResponseBodyDataIngestions>> dataIngestions_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
