// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PlayTs, playTs_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PlayTs, playTs_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    DescribePlayDetailRequest() = default ;
    DescribePlayDetailRequest(const DescribePlayDetailRequest &) = default ;
    DescribePlayDetailRequest(DescribePlayDetailRequest &&) = default ;
    DescribePlayDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayDetailRequest() = default ;
    DescribePlayDetailRequest& operator=(const DescribePlayDetailRequest &) = default ;
    DescribePlayDetailRequest& operator=(DescribePlayDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->language_ != nullptr
        && this->playTs_ != nullptr && this->sessionId_ != nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribePlayDetailRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // playTs Field Functions 
    bool hasPlayTs() const { return this->playTs_ != nullptr;};
    void deletePlayTs() { this->playTs_ = nullptr;};
    inline string playTs() const { DARABONBA_PTR_GET_DEFAULT(playTs_, "") };
    inline DescribePlayDetailRequest& setPlayTs(string playTs) { DARABONBA_PTR_SET_VALUE(playTs_, playTs) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribePlayDetailRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> playTs_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
