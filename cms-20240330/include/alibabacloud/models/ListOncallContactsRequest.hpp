// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONCALLCONTACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTONCALLCONTACTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListOncallContactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOncallContactsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListOncallContactsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
    };
    ListOncallContactsRequest() = default ;
    ListOncallContactsRequest(const ListOncallContactsRequest &) = default ;
    ListOncallContactsRequest(ListOncallContactsRequest &&) = default ;
    ListOncallContactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOncallContactsRequest() = default ;
    ListOncallContactsRequest& operator=(const ListOncallContactsRequest &) = default ;
    ListOncallContactsRequest& operator=(ListOncallContactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timestamp_ == nullptr; };
    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListOncallContactsRequest& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The timestamp of the on-call shift to query. Unit: milliseconds.
    shared_ptr<string> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
