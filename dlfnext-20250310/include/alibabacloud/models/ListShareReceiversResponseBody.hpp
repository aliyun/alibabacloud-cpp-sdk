// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHARERECEIVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHARERECEIVERSRESPONSEBODY_HPP_
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
  class ListShareReceiversResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShareReceiversResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(receivers, receivers_);
    };
    friend void from_json(const Darabonba::Json& j, ListShareReceiversResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(receivers, receivers_);
    };
    ListShareReceiversResponseBody() = default ;
    ListShareReceiversResponseBody(const ListShareReceiversResponseBody &) = default ;
    ListShareReceiversResponseBody(ListShareReceiversResponseBody &&) = default ;
    ListShareReceiversResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShareReceiversResponseBody() = default ;
    ListShareReceiversResponseBody& operator=(const ListShareReceiversResponseBody &) = default ;
    ListShareReceiversResponseBody& operator=(ListShareReceiversResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && this->receivers_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListShareReceiversResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<Receiver> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Receiver>) };
    inline vector<Receiver> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<Receiver>) };
    inline ListShareReceiversResponseBody& setReceivers(const vector<Receiver> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline ListShareReceiversResponseBody& setReceivers(vector<Receiver> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


  protected:
    shared_ptr<string> nextPageToken_ {};
    shared_ptr<vector<Receiver>> receivers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
