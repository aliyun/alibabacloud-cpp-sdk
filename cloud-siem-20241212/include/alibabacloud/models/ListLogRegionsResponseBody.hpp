// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListLogRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogRegions, logRegions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogRegions, logRegions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLogRegionsResponseBody() = default ;
    ListLogRegionsResponseBody(const ListLogRegionsResponseBody &) = default ;
    ListLogRegionsResponseBody(ListLogRegionsResponseBody &&) = default ;
    ListLogRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogRegionsResponseBody() = default ;
    ListLogRegionsResponseBody& operator=(const ListLogRegionsResponseBody &) = default ;
    ListLogRegionsResponseBody& operator=(ListLogRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logRegions_ == nullptr
        && this->requestId_ == nullptr; };
    // logRegions Field Functions 
    bool hasLogRegions() const { return this->logRegions_ != nullptr;};
    void deleteLogRegions() { this->logRegions_ = nullptr;};
    inline const vector<string> & getLogRegions() const { DARABONBA_PTR_GET_CONST(logRegions_, vector<string>) };
    inline vector<string> getLogRegions() { DARABONBA_PTR_GET(logRegions_, vector<string>) };
    inline ListLogRegionsResponseBody& setLogRegions(const vector<string> & logRegions) { DARABONBA_PTR_SET_VALUE(logRegions_, logRegions) };
    inline ListLogRegionsResponseBody& setLogRegions(vector<string> && logRegions) { DARABONBA_PTR_SET_RVALUE(logRegions_, logRegions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> logRegions_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
