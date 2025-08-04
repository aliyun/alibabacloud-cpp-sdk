// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFOTAPENDINGDESKTOPSRESPONSEBODYFOTAPENDINGDESKTOPSSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFOTAPENDINGDESKTOPSRESPONSEBODYFOTAPENDINGDESKTOPSSESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
    };
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions() = default ;
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions(const DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions &) = default ;
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions(DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions &&) = default ;
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions() = default ;
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions& operator=(const DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions &) = default ;
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions& operator=(DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endUserId_ != nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


  protected:
    // The ID of the end user that connects to the cloud computer.
    std::shared_ptr<string> endUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
