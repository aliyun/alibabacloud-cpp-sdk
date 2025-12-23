// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDESUSERANALYZERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDESUSERANALYZERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UnbindESUserAnalyzerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindESUserAnalyzerRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindESUserAnalyzerRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
    };
    UnbindESUserAnalyzerRequest() = default ;
    UnbindESUserAnalyzerRequest(const UnbindESUserAnalyzerRequest &) = default ;
    UnbindESUserAnalyzerRequest(UnbindESUserAnalyzerRequest &&) = default ;
    UnbindESUserAnalyzerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindESUserAnalyzerRequest() = default ;
    UnbindESUserAnalyzerRequest& operator=(const UnbindESUserAnalyzerRequest &) = default ;
    UnbindESUserAnalyzerRequest& operator=(UnbindESUserAnalyzerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & body() const { DARABONBA_GET(body_) };
    Darabonba::Json & body() { DARABONBA_GET(body_) };
    inline UnbindESUserAnalyzerRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline UnbindESUserAnalyzerRequest& setBody(Darabonba::Json & body) { DARABONBA_SET_RVALUE(body_, body) };


  protected:
    // The request parameters.
    Darabonba::Json body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
