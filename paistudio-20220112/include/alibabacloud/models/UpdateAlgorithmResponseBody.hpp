// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALGORITHMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALGORITHMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UpdateAlgorithmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlgorithmResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmId, algorithmId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlgorithmResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmId, algorithmId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateAlgorithmResponseBody() = default ;
    UpdateAlgorithmResponseBody(const UpdateAlgorithmResponseBody &) = default ;
    UpdateAlgorithmResponseBody(UpdateAlgorithmResponseBody &&) = default ;
    UpdateAlgorithmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlgorithmResponseBody() = default ;
    UpdateAlgorithmResponseBody& operator=(const UpdateAlgorithmResponseBody &) = default ;
    UpdateAlgorithmResponseBody& operator=(UpdateAlgorithmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithmId_ != nullptr
        && this->requestId_ != nullptr; };
    // algorithmId Field Functions 
    bool hasAlgorithmId() const { return this->algorithmId_ != nullptr;};
    void deleteAlgorithmId() { this->algorithmId_ = nullptr;};
    inline string algorithmId() const { DARABONBA_PTR_GET_DEFAULT(algorithmId_, "") };
    inline UpdateAlgorithmResponseBody& setAlgorithmId(string algorithmId) { DARABONBA_PTR_SET_VALUE(algorithmId_, algorithmId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAlgorithmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> algorithmId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
