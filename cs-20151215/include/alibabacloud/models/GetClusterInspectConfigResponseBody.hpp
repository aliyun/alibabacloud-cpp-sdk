// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERINSPECTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERINSPECTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterInspectConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterInspectConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(disabledCheckItems, disabledCheckItems_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterInspectConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(disabledCheckItems, disabledCheckItems_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetClusterInspectConfigResponseBody() = default ;
    GetClusterInspectConfigResponseBody(const GetClusterInspectConfigResponseBody &) = default ;
    GetClusterInspectConfigResponseBody(GetClusterInspectConfigResponseBody &&) = default ;
    GetClusterInspectConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterInspectConfigResponseBody() = default ;
    GetClusterInspectConfigResponseBody& operator=(const GetClusterInspectConfigResponseBody &) = default ;
    GetClusterInspectConfigResponseBody& operator=(GetClusterInspectConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disabledCheckItems_ == nullptr
        && return this->enabled_ == nullptr && return this->recurrence_ == nullptr && return this->requestId_ == nullptr; };
    // disabledCheckItems Field Functions 
    bool hasDisabledCheckItems() const { return this->disabledCheckItems_ != nullptr;};
    void deleteDisabledCheckItems() { this->disabledCheckItems_ = nullptr;};
    inline const vector<string> & disabledCheckItems() const { DARABONBA_PTR_GET_CONST(disabledCheckItems_, vector<string>) };
    inline vector<string> disabledCheckItems() { DARABONBA_PTR_GET(disabledCheckItems_, vector<string>) };
    inline GetClusterInspectConfigResponseBody& setDisabledCheckItems(const vector<string> & disabledCheckItems) { DARABONBA_PTR_SET_VALUE(disabledCheckItems_, disabledCheckItems) };
    inline GetClusterInspectConfigResponseBody& setDisabledCheckItems(vector<string> && disabledCheckItems) { DARABONBA_PTR_SET_RVALUE(disabledCheckItems_, disabledCheckItems) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetClusterInspectConfigResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline string recurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
    inline GetClusterInspectConfigResponseBody& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterInspectConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of disabled inspection items.
    std::shared_ptr<vector<string>> disabledCheckItems_ = nullptr;
    // Specifies whether to enable inspection.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The inspection schedule defined through the RFC5545 Recurrence Rule syntax. You must specify BYHOUR and BYMINUTE. Only FREQ=DAILY is supported. COUNT and UNTIL are not supported.
    std::shared_ptr<string> recurrence_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
