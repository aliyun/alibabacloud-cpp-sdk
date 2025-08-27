// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULESHUTTERDOCS_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULESHUTTERDOCS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaItemDetailResponseBodyModuleShutterDocs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailResponseBodyModuleShutterDocs& obj) { 
      DARABONBA_PTR_TO_JSON(contents, contents_);
      DARABONBA_PTR_TO_JSON(main_title, mainTitle_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailResponseBodyModuleShutterDocs& obj) { 
      DARABONBA_PTR_FROM_JSON(contents, contents_);
      DARABONBA_PTR_FROM_JSON(main_title, mainTitle_);
    };
    IntlFlightOtaItemDetailResponseBodyModuleShutterDocs() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleShutterDocs(const IntlFlightOtaItemDetailResponseBodyModuleShutterDocs &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleShutterDocs(IntlFlightOtaItemDetailResponseBodyModuleShutterDocs &&) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleShutterDocs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailResponseBodyModuleShutterDocs() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleShutterDocs& operator=(const IntlFlightOtaItemDetailResponseBodyModuleShutterDocs &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleShutterDocs& operator=(IntlFlightOtaItemDetailResponseBodyModuleShutterDocs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contents_ != nullptr
        && this->mainTitle_ != nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<string> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<string>) };
    inline vector<string> contents() { DARABONBA_PTR_GET(contents_, vector<string>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleShutterDocs& setContents(const vector<string> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline IntlFlightOtaItemDetailResponseBodyModuleShutterDocs& setContents(vector<string> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // mainTitle Field Functions 
    bool hasMainTitle() const { return this->mainTitle_ != nullptr;};
    void deleteMainTitle() { this->mainTitle_ = nullptr;};
    inline string mainTitle() const { DARABONBA_PTR_GET_DEFAULT(mainTitle_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleShutterDocs& setMainTitle(string mainTitle) { DARABONBA_PTR_SET_VALUE(mainTitle_, mainTitle) };


  protected:
    std::shared_ptr<vector<string>> contents_ = nullptr;
    std::shared_ptr<string> mainTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
