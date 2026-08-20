// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SESSIONNETWORKRULETRANSFORM_HPP_
#define ALIBABACLOUD_MODELS_SESSIONNETWORKRULETRANSFORM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SessionNetworkHeaderValueReplacement.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class SessionNetworkRuleTransform : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionNetworkRuleTransform& obj) { 
      DARABONBA_PTR_TO_JSON(headerValueReplacements, headerValueReplacements_);
      DARABONBA_PTR_TO_JSON(headers, headers_);
    };
    friend void from_json(const Darabonba::Json& j, SessionNetworkRuleTransform& obj) { 
      DARABONBA_PTR_FROM_JSON(headerValueReplacements, headerValueReplacements_);
      DARABONBA_PTR_FROM_JSON(headers, headers_);
    };
    SessionNetworkRuleTransform() = default ;
    SessionNetworkRuleTransform(const SessionNetworkRuleTransform &) = default ;
    SessionNetworkRuleTransform(SessionNetworkRuleTransform &&) = default ;
    SessionNetworkRuleTransform(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionNetworkRuleTransform() = default ;
    SessionNetworkRuleTransform& operator=(const SessionNetworkRuleTransform &) = default ;
    SessionNetworkRuleTransform& operator=(SessionNetworkRuleTransform &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headerValueReplacements_ == nullptr
        && this->headers_ == nullptr; };
    // headerValueReplacements Field Functions 
    bool hasHeaderValueReplacements() const { return this->headerValueReplacements_ != nullptr;};
    void deleteHeaderValueReplacements() { this->headerValueReplacements_ = nullptr;};
    inline const vector<SessionNetworkHeaderValueReplacement> & getHeaderValueReplacements() const { DARABONBA_PTR_GET_CONST(headerValueReplacements_, vector<SessionNetworkHeaderValueReplacement>) };
    inline vector<SessionNetworkHeaderValueReplacement> getHeaderValueReplacements() { DARABONBA_PTR_GET(headerValueReplacements_, vector<SessionNetworkHeaderValueReplacement>) };
    inline SessionNetworkRuleTransform& setHeaderValueReplacements(const vector<SessionNetworkHeaderValueReplacement> & headerValueReplacements) { DARABONBA_PTR_SET_VALUE(headerValueReplacements_, headerValueReplacements) };
    inline SessionNetworkRuleTransform& setHeaderValueReplacements(vector<SessionNetworkHeaderValueReplacement> && headerValueReplacements) { DARABONBA_PTR_SET_RVALUE(headerValueReplacements_, headerValueReplacements) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline SessionNetworkRuleTransform& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SessionNetworkRuleTransform& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


  protected:
    // The list of rules for replacing placeholders in HTTP header values before the request is forwarded to the matched host.
    shared_ptr<vector<SessionNetworkHeaderValueReplacement>> headerValueReplacements_ {};
    // The HTTP headers injected or overwritten before the request is forwarded to the matched host. Header values are returned in plaintext in GetSession and ListSessions.
    shared_ptr<map<string, string>> headers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
