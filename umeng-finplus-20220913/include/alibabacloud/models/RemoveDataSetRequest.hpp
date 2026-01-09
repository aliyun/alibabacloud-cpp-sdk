// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class RemoveDataSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveDataSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveDataSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RemoveDataSetRequest() = default ;
    RemoveDataSetRequest(const RemoveDataSetRequest &) = default ;
    RemoveDataSetRequest(RemoveDataSetRequest &&) = default ;
    RemoveDataSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveDataSetRequest() = default ;
    RemoveDataSetRequest& operator=(const RemoveDataSetRequest &) = default ;
    RemoveDataSetRequest& operator=(RemoveDataSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline int64_t getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, 0L) };
    inline RemoveDataSetRequest& setBody(int64_t body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    shared_ptr<int64_t> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
