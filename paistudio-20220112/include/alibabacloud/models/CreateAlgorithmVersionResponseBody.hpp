// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALGORITHMVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEALGORITHMVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateAlgorithmVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlgorithmVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmId, algorithmId_);
      DARABONBA_PTR_TO_JSON(AlgorithmVersion, algorithmVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlgorithmVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmId, algorithmId_);
      DARABONBA_PTR_FROM_JSON(AlgorithmVersion, algorithmVersion_);
    };
    CreateAlgorithmVersionResponseBody() = default ;
    CreateAlgorithmVersionResponseBody(const CreateAlgorithmVersionResponseBody &) = default ;
    CreateAlgorithmVersionResponseBody(CreateAlgorithmVersionResponseBody &&) = default ;
    CreateAlgorithmVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlgorithmVersionResponseBody() = default ;
    CreateAlgorithmVersionResponseBody& operator=(const CreateAlgorithmVersionResponseBody &) = default ;
    CreateAlgorithmVersionResponseBody& operator=(CreateAlgorithmVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithmId_ == nullptr
        && this->algorithmVersion_ == nullptr; };
    // algorithmId Field Functions 
    bool hasAlgorithmId() const { return this->algorithmId_ != nullptr;};
    void deleteAlgorithmId() { this->algorithmId_ = nullptr;};
    inline string getAlgorithmId() const { DARABONBA_PTR_GET_DEFAULT(algorithmId_, "") };
    inline CreateAlgorithmVersionResponseBody& setAlgorithmId(string algorithmId) { DARABONBA_PTR_SET_VALUE(algorithmId_, algorithmId) };


    // algorithmVersion Field Functions 
    bool hasAlgorithmVersion() const { return this->algorithmVersion_ != nullptr;};
    void deleteAlgorithmVersion() { this->algorithmVersion_ = nullptr;};
    inline string getAlgorithmVersion() const { DARABONBA_PTR_GET_DEFAULT(algorithmVersion_, "") };
    inline CreateAlgorithmVersionResponseBody& setAlgorithmVersion(string algorithmVersion) { DARABONBA_PTR_SET_VALUE(algorithmVersion_, algorithmVersion) };


  protected:
    shared_ptr<string> algorithmId_ {};
    shared_ptr<string> algorithmVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
