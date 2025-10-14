// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECOLDDATAVOLUMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECOLDDATAVOLUMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class AllocateColdDataVolumeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateColdDataVolumeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateColdDataVolumeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AllocateColdDataVolumeResponseBody() = default ;
    AllocateColdDataVolumeResponseBody(const AllocateColdDataVolumeResponseBody &) = default ;
    AllocateColdDataVolumeResponseBody(AllocateColdDataVolumeResponseBody &&) = default ;
    AllocateColdDataVolumeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateColdDataVolumeResponseBody() = default ;
    AllocateColdDataVolumeResponseBody& operator=(const AllocateColdDataVolumeResponseBody &) = default ;
    AllocateColdDataVolumeResponseBody& operator=(AllocateColdDataVolumeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateColdDataVolumeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
