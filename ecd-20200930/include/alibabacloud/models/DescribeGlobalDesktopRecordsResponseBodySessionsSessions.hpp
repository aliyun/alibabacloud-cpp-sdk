// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSRESPONSEBODYSESSIONSSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSRESPONSEBODYSESSIONSSESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalDesktopRecordsResponseBodySessionsSessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopRecordsResponseBodySessionsSessions& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EstablishmentTime, establishmentTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopRecordsResponseBodySessionsSessions& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EstablishmentTime, establishmentTime_);
    };
    DescribeGlobalDesktopRecordsResponseBodySessionsSessions() = default ;
    DescribeGlobalDesktopRecordsResponseBodySessionsSessions(const DescribeGlobalDesktopRecordsResponseBodySessionsSessions &) = default ;
    DescribeGlobalDesktopRecordsResponseBodySessionsSessions(DescribeGlobalDesktopRecordsResponseBodySessionsSessions &&) = default ;
    DescribeGlobalDesktopRecordsResponseBodySessionsSessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopRecordsResponseBodySessionsSessions() = default ;
    DescribeGlobalDesktopRecordsResponseBodySessionsSessions& operator=(const DescribeGlobalDesktopRecordsResponseBodySessionsSessions &) = default ;
    DescribeGlobalDesktopRecordsResponseBodySessionsSessions& operator=(DescribeGlobalDesktopRecordsResponseBodySessionsSessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserId_ == nullptr
        && return this->establishmentTime_ == nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessionsSessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // establishmentTime Field Functions 
    bool hasEstablishmentTime() const { return this->establishmentTime_ != nullptr;};
    void deleteEstablishmentTime() { this->establishmentTime_ = nullptr;};
    inline string establishmentTime() const { DARABONBA_PTR_GET_DEFAULT(establishmentTime_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessionsSessions& setEstablishmentTime(string establishmentTime) { DARABONBA_PTR_SET_VALUE(establishmentTime_, establishmentTime) };


  protected:
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<string> establishmentTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
