// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOUNDTOOLAPI_HPP_
#define ALIBABACLOUD_MODELS_BOUNDTOOLAPI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BoundToolApi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BoundToolApi& obj) { 
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, BoundToolApi& obj) { 
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    BoundToolApi() = default ;
    BoundToolApi(const BoundToolApi &) = default ;
    BoundToolApi(BoundToolApi &&) = default ;
    BoundToolApi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BoundToolApi() = default ;
    BoundToolApi& operator=(const BoundToolApi &) = default ;
    BoundToolApi& operator=(BoundToolApi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->method_ == nullptr
        && this->path_ == nullptr; };
    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline BoundToolApi& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline BoundToolApi& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    shared_ptr<string> method_ {};
    shared_ptr<string> path_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
