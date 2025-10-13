// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALGORITHMSPECCUSTOMIZATION_HPP_
#define ALIBABACLOUD_MODELS_ALGORITHMSPECCUSTOMIZATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class AlgorithmSpecCustomization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlgorithmSpecCustomization& obj) { 
      DARABONBA_PTR_TO_JSON(CodeDir, codeDir_);
    };
    friend void from_json(const Darabonba::Json& j, AlgorithmSpecCustomization& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeDir, codeDir_);
    };
    AlgorithmSpecCustomization() = default ;
    AlgorithmSpecCustomization(const AlgorithmSpecCustomization &) = default ;
    AlgorithmSpecCustomization(AlgorithmSpecCustomization &&) = default ;
    AlgorithmSpecCustomization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlgorithmSpecCustomization() = default ;
    AlgorithmSpecCustomization& operator=(const AlgorithmSpecCustomization &) = default ;
    AlgorithmSpecCustomization& operator=(AlgorithmSpecCustomization &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeDir_ == nullptr; };
    // codeDir Field Functions 
    bool hasCodeDir() const { return this->codeDir_ != nullptr;};
    void deleteCodeDir() { this->codeDir_ = nullptr;};
    inline bool codeDir() const { DARABONBA_PTR_GET_DEFAULT(codeDir_, false) };
    inline AlgorithmSpecCustomization& setCodeDir(bool codeDir) { DARABONBA_PTR_SET_VALUE(codeDir_, codeDir) };


  protected:
    std::shared_ptr<bool> codeDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
