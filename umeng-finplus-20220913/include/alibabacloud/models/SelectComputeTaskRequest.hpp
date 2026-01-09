// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTCOMPUTETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SELECTCOMPUTETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SelectComputeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectComputeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SelectComputeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SelectComputeTaskRequest() = default ;
    SelectComputeTaskRequest(const SelectComputeTaskRequest &) = default ;
    SelectComputeTaskRequest(SelectComputeTaskRequest &&) = default ;
    SelectComputeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectComputeTaskRequest() = default ;
    SelectComputeTaskRequest& operator=(const SelectComputeTaskRequest &) = default ;
    SelectComputeTaskRequest& operator=(SelectComputeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline int64_t getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, 0L) };
    inline SelectComputeTaskRequest& setBody(int64_t body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    shared_ptr<int64_t> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
