// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCANFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScanFileInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ScanFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ScanFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ScanFileRequest() = default ;
    ScanFileRequest(const ScanFileRequest &) = default ;
    ScanFileRequest(ScanFileRequest &&) = default ;
    ScanFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanFileRequest() = default ;
    ScanFileRequest& operator=(const ScanFileRequest &) = default ;
    ScanFileRequest& operator=(ScanFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ScanFileInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, ScanFileInput) };
    inline ScanFileInput getBody() { DARABONBA_PTR_GET(body_, ScanFileInput) };
    inline ScanFileRequest& setBody(const ScanFileInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ScanFileRequest& setBody(ScanFileInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<ScanFileInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
