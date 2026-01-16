// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNCTIONLAYER_HPP_
#define ALIBABACLOUD_MODELS_FUNCTIONLAYER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class FunctionLayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FunctionLayer& obj) { 
      DARABONBA_PTR_TO_JSON(arn, arn_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, FunctionLayer& obj) { 
      DARABONBA_PTR_FROM_JSON(arn, arn_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    FunctionLayer() = default ;
    FunctionLayer(const FunctionLayer &) = default ;
    FunctionLayer(FunctionLayer &&) = default ;
    FunctionLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FunctionLayer() = default ;
    FunctionLayer& operator=(const FunctionLayer &) = default ;
    FunctionLayer& operator=(FunctionLayer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && this->size_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline FunctionLayer& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline FunctionLayer& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    shared_ptr<string> arn_ {};
    shared_ptr<int64_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
