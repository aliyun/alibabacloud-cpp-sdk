// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKERNELRELEASENOTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKERNELRELEASENOTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeKernelReleaseNotesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKernelReleaseNotesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReleaseNotes, releaseNotes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKernelReleaseNotesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReleaseNotes, releaseNotes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeKernelReleaseNotesResponseBody() = default ;
    DescribeKernelReleaseNotesResponseBody(const DescribeKernelReleaseNotesResponseBody &) = default ;
    DescribeKernelReleaseNotesResponseBody(DescribeKernelReleaseNotesResponseBody &&) = default ;
    DescribeKernelReleaseNotesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKernelReleaseNotesResponseBody() = default ;
    DescribeKernelReleaseNotesResponseBody& operator=(const DescribeKernelReleaseNotesResponseBody &) = default ;
    DescribeKernelReleaseNotesResponseBody& operator=(DescribeKernelReleaseNotesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReleaseNotes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReleaseNotes& obj) { 
        DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
      };
      friend void from_json(const Darabonba::Json& j, ReleaseNotes& obj) { 
        DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
      };
      ReleaseNotes() = default ;
      ReleaseNotes(const ReleaseNotes &) = default ;
      ReleaseNotes(ReleaseNotes &&) = default ;
      ReleaseNotes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReleaseNotes() = default ;
      ReleaseNotes& operator=(const ReleaseNotes &) = default ;
      ReleaseNotes& operator=(ReleaseNotes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReleaseNote : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReleaseNote& obj) { 
          DARABONBA_PTR_TO_JSON(KernelVersion, kernelVersion_);
          DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
        };
        friend void from_json(const Darabonba::Json& j, ReleaseNote& obj) { 
          DARABONBA_PTR_FROM_JSON(KernelVersion, kernelVersion_);
          DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
        };
        ReleaseNote() = default ;
        ReleaseNote(const ReleaseNote &) = default ;
        ReleaseNote(ReleaseNote &&) = default ;
        ReleaseNote(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReleaseNote() = default ;
        ReleaseNote& operator=(const ReleaseNote &) = default ;
        ReleaseNote& operator=(ReleaseNote &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->kernelVersion_ == nullptr
        && this->releaseNote_ == nullptr; };
        // kernelVersion Field Functions 
        bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
        void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
        inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
        inline ReleaseNote& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


        // releaseNote Field Functions 
        bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
        void deleteReleaseNote() { this->releaseNote_ = nullptr;};
        inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
        inline ReleaseNote& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


      protected:
        // The version number.
        shared_ptr<string> kernelVersion_ {};
        // The release notes.
        shared_ptr<string> releaseNote_ {};
      };

      virtual bool empty() const override { return this->releaseNote_ == nullptr; };
      // releaseNote Field Functions 
      bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
      void deleteReleaseNote() { this->releaseNote_ = nullptr;};
      inline const vector<ReleaseNotes::ReleaseNote> & getReleaseNote() const { DARABONBA_PTR_GET_CONST(releaseNote_, vector<ReleaseNotes::ReleaseNote>) };
      inline vector<ReleaseNotes::ReleaseNote> getReleaseNote() { DARABONBA_PTR_GET(releaseNote_, vector<ReleaseNotes::ReleaseNote>) };
      inline ReleaseNotes& setReleaseNote(const vector<ReleaseNotes::ReleaseNote> & releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };
      inline ReleaseNotes& setReleaseNote(vector<ReleaseNotes::ReleaseNote> && releaseNote) { DARABONBA_PTR_SET_RVALUE(releaseNote_, releaseNote) };


    protected:
      shared_ptr<vector<ReleaseNotes::ReleaseNote>> releaseNote_ {};
    };

    virtual bool empty() const override { return this->releaseNotes_ == nullptr
        && this->requestId_ == nullptr; };
    // releaseNotes Field Functions 
    bool hasReleaseNotes() const { return this->releaseNotes_ != nullptr;};
    void deleteReleaseNotes() { this->releaseNotes_ = nullptr;};
    inline const DescribeKernelReleaseNotesResponseBody::ReleaseNotes & getReleaseNotes() const { DARABONBA_PTR_GET_CONST(releaseNotes_, DescribeKernelReleaseNotesResponseBody::ReleaseNotes) };
    inline DescribeKernelReleaseNotesResponseBody::ReleaseNotes getReleaseNotes() { DARABONBA_PTR_GET(releaseNotes_, DescribeKernelReleaseNotesResponseBody::ReleaseNotes) };
    inline DescribeKernelReleaseNotesResponseBody& setReleaseNotes(const DescribeKernelReleaseNotesResponseBody::ReleaseNotes & releaseNotes) { DARABONBA_PTR_SET_VALUE(releaseNotes_, releaseNotes) };
    inline DescribeKernelReleaseNotesResponseBody& setReleaseNotes(DescribeKernelReleaseNotesResponseBody::ReleaseNotes && releaseNotes) { DARABONBA_PTR_SET_RVALUE(releaseNotes_, releaseNotes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKernelReleaseNotesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the version release notes.
    shared_ptr<DescribeKernelReleaseNotesResponseBody::ReleaseNotes> releaseNotes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
