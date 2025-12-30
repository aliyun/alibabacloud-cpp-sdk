// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEIMAGEPROTOCOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEIMAGEPROTOCOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class MigrateImageProtocolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateImageProtocolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedIds, failedIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateImageProtocolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedIds, failedIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MigrateImageProtocolResponseBody() = default ;
    MigrateImageProtocolResponseBody(const MigrateImageProtocolResponseBody &) = default ;
    MigrateImageProtocolResponseBody(MigrateImageProtocolResponseBody &&) = default ;
    MigrateImageProtocolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateImageProtocolResponseBody() = default ;
    MigrateImageProtocolResponseBody& operator=(const MigrateImageProtocolResponseBody &) = default ;
    MigrateImageProtocolResponseBody& operator=(MigrateImageProtocolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedIds_ == nullptr
        && this->requestId_ == nullptr; };
    // failedIds Field Functions 
    bool hasFailedIds() const { return this->failedIds_ != nullptr;};
    void deleteFailedIds() { this->failedIds_ = nullptr;};
    inline const vector<string> & getFailedIds() const { DARABONBA_PTR_GET_CONST(failedIds_, vector<string>) };
    inline vector<string> getFailedIds() { DARABONBA_PTR_GET(failedIds_, vector<string>) };
    inline MigrateImageProtocolResponseBody& setFailedIds(const vector<string> & failedIds) { DARABONBA_PTR_SET_VALUE(failedIds_, failedIds) };
    inline MigrateImageProtocolResponseBody& setFailedIds(vector<string> && failedIds) { DARABONBA_PTR_SET_RVALUE(failedIds_, failedIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MigrateImageProtocolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the images whose protocols failed to be updated.
    shared_ptr<vector<string>> failedIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
