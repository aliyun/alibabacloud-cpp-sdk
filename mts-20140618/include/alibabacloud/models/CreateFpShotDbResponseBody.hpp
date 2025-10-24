// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFPSHOTDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFPSHOTDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFpShotDBResponseBodyFpShotDB.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class CreateFpShotDBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFpShotDBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotDB, fpShotDB_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFpShotDBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotDB, fpShotDB_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFpShotDBResponseBody() = default ;
    CreateFpShotDBResponseBody(const CreateFpShotDBResponseBody &) = default ;
    CreateFpShotDBResponseBody(CreateFpShotDBResponseBody &&) = default ;
    CreateFpShotDBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFpShotDBResponseBody() = default ;
    CreateFpShotDBResponseBody& operator=(const CreateFpShotDBResponseBody &) = default ;
    CreateFpShotDBResponseBody& operator=(CreateFpShotDBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShotDB_ == nullptr
        && return this->requestId_ == nullptr; };
    // fpShotDB Field Functions 
    bool hasFpShotDB() const { return this->fpShotDB_ != nullptr;};
    void deleteFpShotDB() { this->fpShotDB_ = nullptr;};
    inline const CreateFpShotDBResponseBodyFpShotDB & fpShotDB() const { DARABONBA_PTR_GET_CONST(fpShotDB_, CreateFpShotDBResponseBodyFpShotDB) };
    inline CreateFpShotDBResponseBodyFpShotDB fpShotDB() { DARABONBA_PTR_GET(fpShotDB_, CreateFpShotDBResponseBodyFpShotDB) };
    inline CreateFpShotDBResponseBody& setFpShotDB(const CreateFpShotDBResponseBodyFpShotDB & fpShotDB) { DARABONBA_PTR_SET_VALUE(fpShotDB_, fpShotDB) };
    inline CreateFpShotDBResponseBody& setFpShotDB(CreateFpShotDBResponseBodyFpShotDB && fpShotDB) { DARABONBA_PTR_SET_RVALUE(fpShotDB_, fpShotDB) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFpShotDBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the media fingerprint library.
    std::shared_ptr<CreateFpShotDBResponseBodyFpShotDB> fpShotDB_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
