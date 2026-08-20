// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SESSIONNETWORKHEADERVALUEREPLACEMENT_HPP_
#define ALIBABACLOUD_MODELS_SESSIONNETWORKHEADERVALUEREPLACEMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class SessionNetworkHeaderValueReplacement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionNetworkHeaderValueReplacement& obj) { 
      DARABONBA_PTR_TO_JSON(placeholder, placeholder_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SessionNetworkHeaderValueReplacement& obj) { 
      DARABONBA_PTR_FROM_JSON(placeholder, placeholder_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    SessionNetworkHeaderValueReplacement() = default ;
    SessionNetworkHeaderValueReplacement(const SessionNetworkHeaderValueReplacement &) = default ;
    SessionNetworkHeaderValueReplacement(SessionNetworkHeaderValueReplacement &&) = default ;
    SessionNetworkHeaderValueReplacement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionNetworkHeaderValueReplacement() = default ;
    SessionNetworkHeaderValueReplacement& operator=(const SessionNetworkHeaderValueReplacement &) = default ;
    SessionNetworkHeaderValueReplacement& operator=(SessionNetworkHeaderValueReplacement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->placeholder_ == nullptr
        && this->value_ == nullptr; };
    // placeholder Field Functions 
    bool hasPlaceholder() const { return this->placeholder_ != nullptr;};
    void deletePlaceholder() { this->placeholder_ = nullptr;};
    inline string getPlaceholder() const { DARABONBA_PTR_GET_DEFAULT(placeholder_, "") };
    inline SessionNetworkHeaderValueReplacement& setPlaceholder(string placeholder) { DARABONBA_PTR_SET_VALUE(placeholder_, placeholder) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SessionNetworkHeaderValueReplacement& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The fake value. A placeholder used by code in the sandbox. The gateway performs an exact substring match on this string within the header value.
    shared_ptr<string> placeholder_ {};
    // The real value. The actual value after the placeholder is replaced.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
