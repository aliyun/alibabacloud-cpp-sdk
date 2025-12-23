// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
    };
    GetFunctionResourceRequest() = default ;
    GetFunctionResourceRequest(const GetFunctionResourceRequest &) = default ;
    GetFunctionResourceRequest(GetFunctionResourceRequest &&) = default ;
    GetFunctionResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionResourceRequest() = default ;
    GetFunctionResourceRequest& operator=(const GetFunctionResourceRequest &) = default ;
    GetFunctionResourceRequest& operator=(GetFunctionResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline GetFunctionResourceRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


  protected:
    // The output level.
    // 
    // Valid values:
    // 
    // *   simple
    // *   normal
    // *   detail
    std::shared_ptr<string> output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
