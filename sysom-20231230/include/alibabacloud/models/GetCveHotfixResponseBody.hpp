// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCVEHOTFIXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCVEHOTFIXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetCveHotfixResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCveHotfixResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCveHotfixResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetCveHotfixResponseBody() = default ;
    GetCveHotfixResponseBody(const GetCveHotfixResponseBody &) = default ;
    GetCveHotfixResponseBody(GetCveHotfixResponseBody &&) = default ;
    GetCveHotfixResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCveHotfixResponseBody() = default ;
    GetCveHotfixResponseBody& operator=(const GetCveHotfixResponseBody &) = default ;
    GetCveHotfixResponseBody& operator=(GetCveHotfixResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(cveId, cveId_);
        DARABONBA_PTR_TO_JSON(hotfix, hotfix_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(cveId, cveId_);
        DARABONBA_PTR_FROM_JSON(hotfix, hotfix_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Hotfix : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Hotfix& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(hotfixName, hotfixName_);
          DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
          DARABONBA_PTR_TO_JSON(packages, packages_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Hotfix& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(hotfixName, hotfixName_);
          DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
          DARABONBA_PTR_FROM_JSON(packages, packages_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Hotfix() = default ;
        Hotfix(const Hotfix &) = default ;
        Hotfix(Hotfix &&) = default ;
        Hotfix(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Hotfix() = default ;
        Hotfix& operator=(const Hotfix &) = default ;
        Hotfix& operator=(Hotfix &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Packages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Packages& obj) { 
            DARABONBA_PTR_TO_JSON(arch, arch_);
            DARABONBA_PTR_TO_JSON(distro, distro_);
            DARABONBA_PTR_TO_JSON(kernelVersion, kernelVersion_);
            DARABONBA_PTR_TO_JSON(rpmNevra, rpmNevra_);
          };
          friend void from_json(const Darabonba::Json& j, Packages& obj) { 
            DARABONBA_PTR_FROM_JSON(arch, arch_);
            DARABONBA_PTR_FROM_JSON(distro, distro_);
            DARABONBA_PTR_FROM_JSON(kernelVersion, kernelVersion_);
            DARABONBA_PTR_FROM_JSON(rpmNevra, rpmNevra_);
          };
          Packages() = default ;
          Packages(const Packages &) = default ;
          Packages(Packages &&) = default ;
          Packages(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Packages() = default ;
          Packages& operator=(const Packages &) = default ;
          Packages& operator=(Packages &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arch_ == nullptr
        && this->distro_ == nullptr && this->kernelVersion_ == nullptr && this->rpmNevra_ == nullptr; };
          // arch Field Functions 
          bool hasArch() const { return this->arch_ != nullptr;};
          void deleteArch() { this->arch_ = nullptr;};
          inline string getArch() const { DARABONBA_PTR_GET_DEFAULT(arch_, "") };
          inline Packages& setArch(string arch) { DARABONBA_PTR_SET_VALUE(arch_, arch) };


          // distro Field Functions 
          bool hasDistro() const { return this->distro_ != nullptr;};
          void deleteDistro() { this->distro_ = nullptr;};
          inline string getDistro() const { DARABONBA_PTR_GET_DEFAULT(distro_, "") };
          inline Packages& setDistro(string distro) { DARABONBA_PTR_SET_VALUE(distro_, distro) };


          // kernelVersion Field Functions 
          bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
          void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
          inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
          inline Packages& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


          // rpmNevra Field Functions 
          bool hasRpmNevra() const { return this->rpmNevra_ != nullptr;};
          void deleteRpmNevra() { this->rpmNevra_ = nullptr;};
          inline string getRpmNevra() const { DARABONBA_PTR_GET_DEFAULT(rpmNevra_, "") };
          inline Packages& setRpmNevra(string rpmNevra) { DARABONBA_PTR_SET_VALUE(rpmNevra_, rpmNevra) };


        protected:
          // The architecture.
          shared_ptr<string> arch_ {};
          // The distribution. This value is null if the distribution is not registered.
          shared_ptr<string> distro_ {};
          // The compatible full kernel version.
          shared_ptr<string> kernelVersion_ {};
          // The RPM package identifier.
          shared_ptr<string> rpmNevra_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->hotfixName_ == nullptr && this->moduleName_ == nullptr && this->packages_ == nullptr && this->version_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Hotfix& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // hotfixName Field Functions 
        bool hasHotfixName() const { return this->hotfixName_ != nullptr;};
        void deleteHotfixName() { this->hotfixName_ = nullptr;};
        inline string getHotfixName() const { DARABONBA_PTR_GET_DEFAULT(hotfixName_, "") };
        inline Hotfix& setHotfixName(string hotfixName) { DARABONBA_PTR_SET_VALUE(hotfixName_, hotfixName) };


        // moduleName Field Functions 
        bool hasModuleName() const { return this->moduleName_ != nullptr;};
        void deleteModuleName() { this->moduleName_ = nullptr;};
        inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
        inline Hotfix& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


        // packages Field Functions 
        bool hasPackages() const { return this->packages_ != nullptr;};
        void deletePackages() { this->packages_ = nullptr;};
        inline const vector<Hotfix::Packages> & getPackages() const { DARABONBA_PTR_GET_CONST(packages_, vector<Hotfix::Packages>) };
        inline vector<Hotfix::Packages> getPackages() { DARABONBA_PTR_GET(packages_, vector<Hotfix::Packages>) };
        inline Hotfix& setPackages(const vector<Hotfix::Packages> & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
        inline Hotfix& setPackages(vector<Hotfix::Packages> && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Hotfix& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The hotfix description.
        shared_ptr<string> description_ {};
        // The hotfix name.
        shared_ptr<string> hotfixName_ {};
        // The hotfix module name.
        shared_ptr<string> moduleName_ {};
        // The list of published packages that meet the kernel requirements.
        shared_ptr<vector<Hotfix::Packages>> packages_ {};
        // The hotfix version.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->cveId_ == nullptr
        && this->hotfix_ == nullptr; };
      // cveId Field Functions 
      bool hasCveId() const { return this->cveId_ != nullptr;};
      void deleteCveId() { this->cveId_ = nullptr;};
      inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
      inline Data& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


      // hotfix Field Functions 
      bool hasHotfix() const { return this->hotfix_ != nullptr;};
      void deleteHotfix() { this->hotfix_ = nullptr;};
      inline const Data::Hotfix & getHotfix() const { DARABONBA_PTR_GET_CONST(hotfix_, Data::Hotfix) };
      inline Data::Hotfix getHotfix() { DARABONBA_PTR_GET(hotfix_, Data::Hotfix) };
      inline Data& setHotfix(const Data::Hotfix & hotfix) { DARABONBA_PTR_SET_VALUE(hotfix_, hotfix) };
      inline Data& setHotfix(Data::Hotfix && hotfix) { DARABONBA_PTR_SET_RVALUE(hotfix_, hotfix) };


    protected:
      // The CVE ID.
      shared_ptr<string> cveId_ {};
      // The hotfix information for the CVE.
      shared_ptr<Data::Hotfix> hotfix_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCveHotfixResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetCveHotfixResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetCveHotfixResponseBody::Data>) };
    inline vector<GetCveHotfixResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetCveHotfixResponseBody::Data>) };
    inline GetCveHotfixResponseBody& setData(const vector<GetCveHotfixResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCveHotfixResponseBody& setData(vector<GetCveHotfixResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCveHotfixResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCveHotfixResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    // - If `code == Success`, the authorization is successful.
    // - Other status codes indicate that the authorization failed. If the authorization failed, check the `message` field for the detailed fault information.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<GetCveHotfixResponseBody::Data>> data_ {};
    // The error message.
    // - If `code == Success`, this field is empty.
    // - Otherwise, this field contains the request error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
