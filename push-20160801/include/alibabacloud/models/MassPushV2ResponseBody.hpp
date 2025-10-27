// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASSPUSHV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MASSPUSHV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class MassPushV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MassPushV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageIds, messageIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MassPushV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageIds, messageIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MassPushV2ResponseBody() = default ;
    MassPushV2ResponseBody(const MassPushV2ResponseBody &) = default ;
    MassPushV2ResponseBody(MassPushV2ResponseBody &&) = default ;
    MassPushV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MassPushV2ResponseBody() = default ;
    MassPushV2ResponseBody& operator=(const MassPushV2ResponseBody &) = default ;
    MassPushV2ResponseBody& operator=(MassPushV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageIds_ == nullptr
        && return this->requestId_ == nullptr; };
    // messageIds Field Functions 
    bool hasMessageIds() const { return this->messageIds_ != nullptr;};
    void deleteMessageIds() { this->messageIds_ = nullptr;};
    inline const vector<string> & messageIds() const { DARABONBA_PTR_GET_CONST(messageIds_, vector<string>) };
    inline vector<string> messageIds() { DARABONBA_PTR_GET(messageIds_, vector<string>) };
    inline MassPushV2ResponseBody& setMessageIds(const vector<string> & messageIds) { DARABONBA_PTR_SET_VALUE(messageIds_, messageIds) };
    inline MassPushV2ResponseBody& setMessageIds(vector<string> && messageIds) { DARABONBA_PTR_SET_RVALUE(messageIds_, messageIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MassPushV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> messageIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
