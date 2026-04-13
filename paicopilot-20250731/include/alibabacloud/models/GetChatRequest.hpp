// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class GetChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
    };
    GetChatRequest() = default ;
    GetChatRequest(const GetChatRequest &) = default ;
    GetChatRequest(GetChatRequest &&) = default ;
    GetChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatRequest() = default ;
    GetChatRequest& operator=(const GetChatRequest &) = default ;
    GetChatRequest& operator=(GetChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->verbose_ == nullptr; };
    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline string getVerbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, "") };
    inline GetChatRequest& setVerbose(string verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    shared_ptr<string> verbose_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
