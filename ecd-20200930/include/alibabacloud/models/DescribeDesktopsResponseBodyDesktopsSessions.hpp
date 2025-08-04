// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSSESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopsResponseBodyDesktopsSessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsResponseBodyDesktopsSessions& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EstablishmentTime, establishmentTime_);
      DARABONBA_PTR_TO_JSON(ExternalUserName, externalUserName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsResponseBodyDesktopsSessions& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EstablishmentTime, establishmentTime_);
      DARABONBA_PTR_FROM_JSON(ExternalUserName, externalUserName_);
    };
    DescribeDesktopsResponseBodyDesktopsSessions() = default ;
    DescribeDesktopsResponseBodyDesktopsSessions(const DescribeDesktopsResponseBodyDesktopsSessions &) = default ;
    DescribeDesktopsResponseBodyDesktopsSessions(DescribeDesktopsResponseBodyDesktopsSessions &&) = default ;
    DescribeDesktopsResponseBodyDesktopsSessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsResponseBodyDesktopsSessions() = default ;
    DescribeDesktopsResponseBodyDesktopsSessions& operator=(const DescribeDesktopsResponseBodyDesktopsSessions &) = default ;
    DescribeDesktopsResponseBodyDesktopsSessions& operator=(DescribeDesktopsResponseBodyDesktopsSessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endUserId_ != nullptr
        && this->establishmentTime_ != nullptr && this->externalUserName_ != nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeDesktopsResponseBodyDesktopsSessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // establishmentTime Field Functions 
    bool hasEstablishmentTime() const { return this->establishmentTime_ != nullptr;};
    void deleteEstablishmentTime() { this->establishmentTime_ = nullptr;};
    inline string establishmentTime() const { DARABONBA_PTR_GET_DEFAULT(establishmentTime_, "") };
    inline DescribeDesktopsResponseBodyDesktopsSessions& setEstablishmentTime(string establishmentTime) { DARABONBA_PTR_SET_VALUE(establishmentTime_, establishmentTime) };


    // externalUserName Field Functions 
    bool hasExternalUserName() const { return this->externalUserName_ != nullptr;};
    void deleteExternalUserName() { this->externalUserName_ = nullptr;};
    inline string externalUserName() const { DARABONBA_PTR_GET_DEFAULT(externalUserName_, "") };
    inline DescribeDesktopsResponseBodyDesktopsSessions& setExternalUserName(string externalUserName) { DARABONBA_PTR_SET_VALUE(externalUserName_, externalUserName) };


  protected:
    // The ID of the end user that connects to the cloud computer.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The time when the cloud computer session was established.
    std::shared_ptr<string> establishmentTime_ = nullptr;
    // The name of the external user.
    std::shared_ptr<string> externalUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
