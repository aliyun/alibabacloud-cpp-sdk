// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECEIVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECEIVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Receiver.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListReceiversResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReceiversResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(receivers, receivers_);
    };
    friend void from_json(const Darabonba::Json& j, ListReceiversResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(receivers, receivers_);
    };
    ListReceiversResponseBody() = default ;
    ListReceiversResponseBody(const ListReceiversResponseBody &) = default ;
    ListReceiversResponseBody(ListReceiversResponseBody &&) = default ;
    ListReceiversResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReceiversResponseBody() = default ;
    ListReceiversResponseBody& operator=(const ListReceiversResponseBody &) = default ;
    ListReceiversResponseBody& operator=(ListReceiversResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && return this->receivers_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListReceiversResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<Receiver> & receivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Receiver>) };
    inline vector<Receiver> receivers() { DARABONBA_PTR_GET(receivers_, vector<Receiver>) };
    inline ListReceiversResponseBody& setReceivers(const vector<Receiver> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline ListReceiversResponseBody& setReceivers(vector<Receiver> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<Receiver>> receivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
